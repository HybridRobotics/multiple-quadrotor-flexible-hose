function [ref]= afh_flat2state(data, flats)
% Function to generate Desired trajectory and states for Two Quadrotor with
% suspended flexible cable i.e., n links

% INPUTS: 
% 
% |___|                   |___|
%   | q1    q2    qi    qn  |
%  xo----x1----x2----xi.....xn
%   1    2     3      4      5  <- position indices
%
%
% =====================================================================
%%
states = struct();

% initial verifications
% ---------------------
dmax = 4+(2*data.n); % highest required derivative of the position
useT2q = true; % computing q & dervs from tensions & its derivatives

% flats.x0 <- flats.x0.x[3,1] (position), flats.x0.dx[3,dmax] (position derivatives)
if dmax > length(flats.x0.dx)
    warning('Not enough position derivatives provided\n considering higher derivative of x0 to be zero');
    useT2q = false;
end


% starting-position of the cable
% ------------------------------
if iscell(flats.x0.dx)
    flats.x0.dx = cell2mat(flats.x0.dx); 
end
states.positions = flats.x0; % index 1



% flat-tensions
% -------------
ft_ind = data.setI(1:end-1);
if ~isempty(ft_ind)
    if length(ft_ind) == length(flats.T)
        for i = 1:length(ft_ind)
            idx = ft_ind(i);
            states.tensions(idx).T = flats.T(i).T;
            states.tensions(idx).dT = flats.T(i).dT;
        end
    elseif length(flats.T) == 1
        for i = 1:length(ft_ind)
            idx = ft_ind(i);
            states.tensions(idx).T = flats.T.T;
            states.tensions(idx).dT = flats.T.dT;
        end
    else
        error('issue with flat-tensions');
    end
end

% looping over n-vertices computing positions, tensions and attitudes
% -----------------------
iq = 1;
for i = 0:data.n 
    % first position    
    if data.I(i+1) % quadrotor at position i, i.e.x_{i}
        if i == 0 % first vertex
            % =============================
            %     |_v_|    (q1, T1)      
            %  (x0) o-----------------o
            %                        (x1)
            % =============================
            
            % positions and tensions
            [x0] = states.positions(i+1); % x0
            [T1] = states.tensions(i+1);   % T1
            if data.n == 0
                T1.T = zeros(3,1);
                T1.dT = zeros(3,2);
            end
            
            % computing thrust & derivatives
            fb3 = data.mbar(i+1)*(x0.dx(:,2)+data.g*data.e3) - T1.T;
            dfb3 = data.mbar(i+1)*(x0.dx(:,3)) -T1.dT(:,1) ;
            d2fb3 = data.mbar(i+1)*(x0.dx(:,4)) -T1.dT(:,2);
            
            % computing quadrotor thrust, attitude & moment
            states.quad(iq).attitude = flat2stateQuadrotor(fb3, dfb3, d2fb3, data.J(:,:,iq));
            states.quad(iq).index = i+1;
            
        elseif i == data.n % last vertex
            % =============================
            %           (qn, Tn)      |_v_|
            %  (xnm1) o-----------------o
            %                        (xn)
            % =============================
            [xnm1] = states.positions(i); % x_{i-1}
            [qn] = states.attitudes(i);
            [Tn] = states.tensions(i);

            
            % computing vertex "i==n" position
            xn.x = xnm1.x + data.l(i)*qn.q;
            for k = 1:(size(xnm1.dx,2)-2)
                xn.dx(:,k) = xnm1.dx(:,k) + data.l(i)*qn.dq(:,k);
            end
            states.positions(i+1).x = xn.x;     
            states.positions(i+1).dx = xn.dx;     

            % computing thrust & derivatives
            fb3 = data.mbar(i+1)*(xn.dx(:,2)+data.g*data.e3) + Tn.T;
            dfb3 = data.mbar(i+1)*(xn.dx(:,3)) + Tn.dT(:,1) ;
            d2fb3 = data.mbar(i+1)*(xn.dx(:,4)) + Tn.dT(:,2);
            
            % computing quadrotor thrust, attitude & moment
            states.quad(iq).attitude = flat2stateQuadrotor(fb3, dfb3, d2fb3, data.J(:,:,iq));
            states.quad(iq).index = i+1;
            
        end
        iq = iq+1;
    else
        if i == 0
            % =============================
            %           (q1, T1) 
            %  (x0) o--------------o(x1)
            %                   
            % =============================
            [x0] = states.positions(i); % x_{i-1} 

            % computing tension in the next link 
            T1.T = data.mbar(i+1)*(x0.dx(:,2)+data.g*data.e3) ;
            for k = 1:(size(x0.dx,2)-2)
                T1.dT(:,k) = data.mbar(i+1)*(x0.dx(:,k+2)) ;
            end
            flats_n_states.set_tension_in_link(i+1, T1);
        elseif i == data.n
            error('Flatness Error: This system is not differentially-flat');
        else
            % ==========================================
            %           (qi, Ti)     (qip1, Tip1) 
            %  (xim1)o------------o--------------o(xip1)
            %                   (xi)
            % ==========================================
            [xim1] = flats_n_states.position_at(i-1); % x_{i-1}
            [qi] = flats_n_states.attitude_of_link(i);
            [Ti] = flats_n_states.tension_in_link(i);

            % computing vertex "i" position
            xi.x = xim1.x + data.l(i)*qi.q;
            for k = 1:(size(xim1.dx,2)-2)
                xi.dx(:,k) = xim1.dx(:,k) + data.l(i)*qi.dq(:,k);
            end
            flats_n_states.set_position_at(i, xi);     

            % computing tension in the next link 
            Tip1.T = data.mbar(i+1)*(xi.dx(:,2)+data.g*data.e3) + Ti.T;
            for k = 1:(size(xi.dx,2)-2)
                Tip1.dT(:,k) = data.mbar(i+1)*(xi.dx(:,k+2)) + Ti.dT(:,k);
            end
            flats_n_states.set_tension_in_link(i+1, Tip1);
        end
    end
end

% computing xd, dxd, ud
x0d = flats_n_states.position_at(0).x;
v0d = flats_n_states.position_at(0).dx(:,1);
a0d = flats_n_states.position_at(0).dx(:,2);

qd = zeros(3,data.n);
dqd = zeros(3,data.n);
d2qd = zeros(3,data.n);

for i = 1:data.n
    qd(:,i) = flats_n_states.attitude_of_link(i).q;
    dqd(:,i) = flats_n_states.attitude_of_link(i).dq(:,1);
    d2qd(:,i) = flats_n_states.attitude_of_link(i).dq(:,2);
end

Rd  =  zeros(3,3,data.nQ);
dRd  = zeros(3,3,data.nQ);
d2Rd = zeros(3,3,data.nQ);
Omd = zeros(3, data.nQ);
dOmd = zeros(3, data.nQ);
fd = zeros(1,data.nQ);
Md = zeros(3,data.nQ);
for i = 1:data.nQ
    Rd(:,:,i) = flats_n_states.quad(i).attitude.R;
    dRd(:,:,i) = flats_n_states.quad(i).attitude.dR;
    d2Rd(:,:,i) = flats_n_states.quad(i).attitude.d2R;
    Omd(:,i) = flats_n_states.quad(i).attitude.Om;
    dOmd(:,i) = flats_n_states.quad(i).attitude.dOm;
    fd(i) = flats_n_states.quad(i).attitude.f;
    Md(:,i) = flats_n_states.quad(i).attitude.M;
end
% Rd
% xd
ref.xd = data.zipState(x0d,qd, v0d, dqd,Rd,Omd);
% dxd 
ref.dxd = data.zipState(v0d,dqd, a0d, d2qd,dRd,dOmd);
% ud
ref.ud = [fd; Md];

ref.states = flats_n_states;


end



function[attitdes] = flat2stateQuadrotor(fb3, dfb3, d2fb3, J)
    
    b1d = e1 ;
    db1d = zeros(3,1) ;
    d2b1d = zeros(3,1) ;

%     fb3 = mQ*(xQ.dx{2}+g*e3) - T.T;
    norm_fb3 = norm(fb3) ;
    f = norm_fb3 ;
    b3 = fb3 / norm_fb3 ;
    b3_b1d = vec_cross(b3, b1d) ;
    norm_b3_b1d = norm(b3_b1d) ;
    b1 = - vec_cross(b3, b3_b1d) / norm_b3_b1d ;
    b2 = vec_cross(b3, b1) ;
    R = [b1 b2 b3] ;

%     dfb3 = mQ*(xQ.dx{3}) -T.dT{1} ;
    dnorm_fb3 = vec_dot(fb3, dfb3) / norm_fb3 ;
    db3 = (dfb3*norm_fb3 - fb3*dnorm_fb3) / norm_fb3^2 ;
    db3_b1d = vec_cross(db3, b1d) + vec_cross(b3, db1d) ;
    dnorm_b3_b1d = vec_dot(b3_b1d, db3_b1d) / norm_b3_b1d ;
    db1 = (-vec_cross(db3,b3_b1d)-vec_cross(b3,db3_b1d) - b1*dnorm_b3_b1d) / norm_b3_b1d ;
    db2 = vec_cross(db3, b1) + vec_cross(b3, db1) ;
    dR = [db1 db2 db3] ;
    Omega = vee_map(R'*dR) ;

%     d2fb3 = mQ*(xQ.dx{4}) -T.dT{2};
    d2norm_fb3 = (vec_dot(dfb3, dfb3)+vec_dot(fb3, d2fb3) - dnorm_fb3*dnorm_fb3) / norm_fb3 ;
    d2b3 = ( (d2fb3*norm_fb3+dfb3*dnorm_fb3 - dfb3*dnorm_fb3-fb3*d2norm_fb3)*norm_fb3^2 - db3*norm_fb3^2*2*norm_fb3*dnorm_fb3 ) / norm_fb3^4 ;
    d2b3_b1d = vec_cross(d2b3, b1d)+vec_cross(db3, db1d) + vec_cross(db3, db1d)+vec_cross(b3, d2b1d) ;
    d2norm_b3_b1d = ( (vec_dot(db3_b1d,db3_b1d)+vec_dot(b3_b1d,d2b3_b1d))*norm_b3_b1d - vec_dot(b3_b1d, db3_b1d)*dnorm_b3_b1d ) / norm_b3_b1d^2 ;
    d2b1 = ( (-vec_cross(d2b3,b3_b1d)-vec_cross(db3,db3_b1d) - vec_cross(db3,db3_b1d)-vec_cross(b3,d2b3_b1d) - db1*dnorm_b3_b1d-b1*d2norm_b3_b1d )*norm_b3_b1d - db1*norm_b3_b1d*dnorm_b3_b1d ) / norm_b3_b1d^2 ;
    d2b2 = vec_cross(d2b3, b1)+vec_cross(db3, db1) + vec_cross(db3, db1)+vec_cross(b3, d2b1) ;
    d2R = [d2b1 d2b2 d2b3] ;
    dOmega = vee_map( dR'*dR + R'*d2R ) ; %vee_map( dR'*dR + R'*d2R, true ) ;

    M = J*dOmega + vec_cross(Omega, J*Omega) ;

    % FINAL DESIRED TRAJECTORY
    % ========================
    % Quad Attitude
    attitdes.R = R;
    attitdes.Om = Omega;
    attitdes.dOm = dOmega;
    attitdes.dR = dR;
    attitdes.d2R = d2R;

    % inputs
    attitdes.f = f;
    attitdes.M = M;

end


