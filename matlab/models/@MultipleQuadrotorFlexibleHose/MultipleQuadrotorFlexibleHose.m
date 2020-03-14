classdef MultipleQuadrotorFlexibleHose < DynamicalSystem
%% Multiple quadrotors carrying a flexible cable/pipe
%  Q:= R3 x (S2)^n x (SO(3))^nQ
%
% state:
% x = [x0; q(:); v0: dq(:), R(:), Om(:)];
%
% inputs:
% u = [f; M]; size(f) = [1, nQ], size(M) = [3, nQ]
% ---------------------------------------------------


%%
properties  
    n@double     % number of links
    nvert@double % number of vertices = n+1
    l@double     % length of the links
    m@double     % mass of nverts
    mbar@double
    getMbar
    
    
    setI@double  % set of quadrotor indices
    I@double     % indicator func for setI
    mQ@double    % mass of quadrotors
    quad         % place holder for each quadrotor << TODO
    
    M
    M00
    M0i
    Mi0
    Mij
    Mtop
    mge3
    
    damp_coeff = 0.1 % damping coefficient
    
    get_dx@function_handle
    get_dyn_dq_mex@function_handle
    get_desired_states@function_handle

end
%%
methods
    % constructor
    % =====================================================
    function obj = MultipleQuadrotorFlexibleHose(varargin)
        obj.name = 'MultipleQuadrotorFlexibleHose';
        obj.parse_inputs(varargin{:});
        obj.computeMassCoeffs();
        
        obj.nx = obj.nvert*6+obj.nQ*12;
        obj.nu = obj.nQ*4;   
        
        % data for mex function
        % -------------------------
        data.n      = obj.n;
        data.nQ     = obj.nQ;
        data.nvert  = obj.nvert;
        data.mge3   = obj.mge3;
        % data.setI   = mdl.setI;
        data.I      = obj.I;
        data.l      = obj.l;
        data.Mtop   = obj.Mtop;
        data.mbar   = obj.mbar;
        for i = 1:obj.nQ
            data.J(:,:,i)      = obj.quad(i).J;
            data.Jinv(:,:,i)   = obj.quad(i).Jinv;
        end
        % data.M = mdl.M;
        data.M      = cell2mat(obj.M);

        obj.get_dyn_dq_mex = @(x,u) afh_dynamics_mex(data, x, u);


    end
    % =====================================================
    
    function [x0, q, v0, dq, R, Om] = unzipState(obj,x)
        ns = 3+obj.n*3;
        nr = obj.nQ*9;
        
        s = x(1:ns);
        ds = x(ns+1:2*ns);
        x0 = s(1:3);
        q = reshape(s(4:end),3,obj.n);
        v0 = ds(1:3);
        dq = reshape(ds(4:end),3,obj.n);
        
        r = x(2*ns+1:2*ns+nr);
        R = reshape(r,3,3,obj.nQ);
        Om = reshape(x(2*ns+nr+1:end),3,obj.nQ);
    end
    
    function [x] = zipState(obj, x0,q, v0, dq,R,Om)
        x = [x0; 
                reshape(q,numel(q),1); 
                v0; 
                reshape(dq,numel(dq),1);
                R(:);
                reshape(Om,numel(Om),1)];
    end
    
    function [xi, vi] = computeVertices(obj,x)
        [x0, q, v0, dq, ~, ~] = obj.unzipState(x);
        xi = zeros(3,obj.nvert); vi = zeros(3,obj.nQ);
        xi(:,1) = x0; vi(:, 1) = v0;
        for i = 1:obj.n
            xi(:,i+1) = xi(:,i)+obj.l(i)*q(:,i);
            vi(:,i+1) = vi(:,i)+obj.l(i)*dq(:,i);
        end
    end
    
    function [xi] = computeVertices2(obj, x0, q)
        xi = zeros(3,obj.nvert); 
        xi(:,1) = x0;
        for i = 1:obj.n
            xi(:,i+1) = xi(:,i)+obj.l(i)*q(:,i);
        end
    end
    
    function [u] = zipInputs(obj, f,M)
        Uarray = [f;M];
        u = Uarray(:); 
    end
    
    function [f,M] = unzipInputs(obj, u)
       Uarray = reshape(u,4,obj.nQ); 
       f = Uarray(1,:);
       M = Uarray(2:4,:);
    end
    
    function updateDesiredStates(obj, ref)
        obj.get_desired_states = @(t) ref;
    end
    
    function [params] =  getModelParams(obj)
        params.n      = obj.n;
        params.nQ     = obj.nQ;
        params.nvert  = obj.nvert;
        params.mge3   = obj.mge3;
        params.setI   = obj.setI;
        params.I      = obj.I;
        params.l      = obj.l;
        params.Mtop   = obj.Mtop;
        params.mbar   = obj.mbar;
        for i = 1:obj.nQ
            params.mQ = obj.quad(i).mQ;
            params.J(:,:,i)      = obj.quad(i).J;
            params.Jinv(:,:,i)   = obj.quad(i).Jinv;
        end
        params.M = obj.M;
        params.M2      = cell2mat(obj.M);
    end
    
    % externally defined functions
    % ----------------------------
    parse_inputs(obj,varargin);
    [x] = get_init_cond(obj, varargin);    
    
    [u] = naive_indep(obj,t,x);
    
    [states]= flat2state(obj, flats);
    
    [e, exnorm, evnorm, eq, edq, Psiq, eR, eOm, PsiR] = error(obj,x,xd);
    [sol] = compute_errors(obj,sol);
    
    plot_results(obj, sol);
    animate(obj, opts_in); 
    
	[output] = optimize_tensions(obj, pos);
    
    [ref] = adapt_desired_state_from(obj, mdlorig, t); 

end

%% abstract methods 
methods %(Abstract)
    function [dx] = get_dynamics(obj, x, u)
        dx = obj.get_dx(x,u);
    end

    function draw_object(obj,varargin)
        tem = get(varargin{1},'Children');
        if nargin > 3
            is_delete = varargin{3};
        else
            is_delete = true;
        end
        if nargin > 4
            cable_color = varargin{4};
        else
            cable_color = 'k';
        end
        
        if is_delete
            delete(tem);
        end
        obj.visualizeState(varargin{2}, cable_color);        
    end
 
    function [u] = ctrl_pd(obj,t,x)
       r = obj.flat2state(t);
       kx = diag([1,1]); kv = 2*diag([1,1]);
       u = r.d2x - kx*(x(1:2)-r.x)-kv*(x(3:4)-r.dx);
       
%        fprintf("t: %f\n",t);
    end
    
    function[qref] = getRefState(obj,t)
    	qref = zeros(obj.nx,length(t));
        for i = 1:length(t)
        	x_ = obj.flat2state(t(i));
            qref(:,i) = [x_.x; x_.dx];
        end
    end    
end

%% dynamics
methods
    function computeMassCoeffs(obj)
        obj.M = {}; 
        obj.M{1,1} = obj.M00*eye(3);
        obj.Mtop = obj.M00*eye(3);
        obj.mge3 = -obj.g*obj.e3*obj.mbar(1);
        
        for i = 1:obj.n
            obj.Mtop = [obj.Mtop, obj.M0i(i)*eye(3)];
            obj.M{1,i+1} = obj.M0i(i)*eye(3);
            obj.M{i+1,1} = obj.Mi0(i)*eye(3);
            
            for j = 1:obj.n
                obj.M{i+1,j+1} = obj.Mij(i,j)*eye(3);
            end
            
            obj.mge3 = [obj.mge3, -obj.g*obj.e3*obj.mbar(i+1)];
        end
    end 
    
    function [Mmat] = computeMassMatrix_dq(obj, q)
        M1 = []; M2 = zeros(3*obj.n,3*obj.n);
        for i = 1:obj.n
            M1 = [M1; hat(q(:,i))^2*obj.M{i+1,1}];
            for j = 1:obj.n
                if i == j
                    M2(3*i-2:3*i,3*j-2:3*j) = -obj.M{i+1,j+1};
                else
                    M2(3*i-2:3*i,3*j-2:3*j) = hat(q(:,i))^2*obj.M{i+1,j+1};
                end
            end        
        end
        Mmat = [obj.Mtop; [M1, M2]];
    end
    
	function [Mmat] = computeMassMatrix_om(obj, q)
        Id = eye(3);
        Mmat = obj.M{1,1}*Id;
        M1 = []; M2 = zeros(3*obj.n,3*obj.n);
        for i = 1:obj.n
            Mmat = [Mmat, -hat(q(:,i))*obj.M{1,i+1}];
            M1 = [M1; hat(q(:,i))*obj.M{i+1,1}];
            for j = 1:obj.n
                if i == j
                    M2(3*i-2:3*i,3*j-2:3*j) = obj.M{i+1,j+1};
                else
                    M2(3*i-2:3*i,3*j-2:3*j) = -hat(q(:,i))*hat(q(:,j))*obj.M{i+1,j+1};
                end
            end        
        end
        Mmat = [Mmat; [M1, M2]];
    end
    
    function [dx] = get_dyn_dq(obj, x, u)
        % using 'q' and 'dq' for link states
        
        % unpacking states
        % -------------------
        [~, q, v0, dq, R, Om] = obj.unzipState(x);
        
        % extracting inputs
        % -------------------
        [f, moments] = obj.unzipInputs(u);
        
        % compute net translation forces
        % -------------------
        uk = zeros(3,obj.nvert);
        j = 1;
        for i = 1:obj.nvert
           uk(:,i) = obj.mge3(:,i);
           if obj.I(i)
               uk(:,i) = uk(:,i)+f(j)*R(:,:,j)*obj.e3;
               j=j+1;
           end
        end
        
        U = sum(uk,2);
        M1 = []; M2 = zeros(3*obj.n,3*obj.n);
        for i = 1:obj.n
            U = [U; obj.M{i+1,i+1}*norm(dq(:,i))^2*q(:,i)+ (obj.l(i)*hat(q(:,i))^2*sum(uk(:,i+1:end),2)) ];
%             U = [U; (obj.l(i)^2*sum(obj.mbar(i:end))*norm(dq(:,i))^2*q(:,i))+(obj.l(i)*hat(q(:,i))^2*sum(uk(:,i:end),2))];
            M1 = [M1; hat(q(:,i))^2*obj.M{i+1,1}];
            for j = 1:obj.n
                if i == j
                    M2(3*i-2:3*i,3*j-2:3*j) = -obj.M{i+1,j+1};
                else
                    M2(3*i-2:3*i,3*j-2:3*j) = hat(q(:,i))^2*obj.M{i+1,j+1};
                end
            end        
        end
        
        Mmat = [obj.Mtop; [M1, M2]];
        
        % ddtrans = [dv0, d2q]
        % Mmat*[ddtrans] = U
        % -------------------
        ddtrans = (Mmat)\U;
        
        % rotational dynamics
        % -------------------
        dR = zeros(size(R));
        dOm = zeros(size(Om));
        for i = 1:obj.nQ
           dR(:,:,i) = R(:,:,i)*hat(Om(:,i));
           dOm(:,i) = obj.quad(i).Jinv*(moments(:,i)-cross(Om(:,i), obj.quad(i).J*Om(:,i)));
        end
        
        
        % packing the state
        % -----------------
        dx = [v0; dq(:); ddtrans; dR(:); dOm(:)];        
    end
    
    function [dx] = get_dyn_dq_damped(obj, x, u)
        % using 'q' and 'dq' for link states
        
        % unpacking states
        % -------------------
        [~, q, v0, dq, R, Om] = obj.unzipState(x);
        omega = zeros(3,obj.n);
        for i = 1:obj.n
            omega(:,i) = cross2(q(:,i), dq(:,i));
        end
        
        % extracting inputs
        % -------------------
        [f, moments] = obj.unzipInputs(u);
        
        % compute net translation forces
        % -------------------
        uk = zeros(3,obj.nvert);
        j = 1;
        for i = 1:obj.nvert
           uk(:,i) = obj.mge3(:,i);
           if obj.I(i)
               uk(:,i) = uk(:,i)+f(j)*R(:,:,j)*obj.e3;
               j=j+1;
           end
        end
        
        U = sum(uk,2);
        M1 = []; M2 = zeros(3*obj.n,3*obj.n);
        for i = 1:obj.n
            U = [U; obj.M{i+1,i+1}*norm(dq(:,i))^2*q(:,i)+ (obj.l(i)*hat(q(:,i))^2*sum(uk(:,i+1:end),2)) ];
%             U = [U; (obj.l(i)^2*sum(obj.mbar(i:end))*norm(dq(:,i))^2*q(:,i))+(obj.l(i)*hat(q(:,i))^2*sum(uk(:,i:end),2))];
            M1 = [M1; hat(q(:,i))^2*obj.M{i+1,1}];
            for j = 1:obj.n
                if i == j
                    M2(3*i-2:3*i,3*j-2:3*j) = -obj.M{i+1,j+1};
                else
                    M2(3*i-2:3*i,3*j-2:3*j) = hat(q(:,i))^2*obj.M{i+1,j+1};
                end
            end        
        end
        
        Mmat = [obj.Mtop; [M1, M2]];
        
        % ddtrans = [dv0, d2q]
        % Mmat*[ddtrans] = U
        % -------------------
        ddtrans = (Mmat)\U;
        
        % damping in link attitudes
        % -------------------------
        damping = zeros(3,1);
        for k = 1:obj.n
           damping = [damping; -obj.damp_coeff*omega(:,k)]; 
        end
        ddtrans = ddtrans + damping;
        
        % rotational dynamics
        % -------------------
        dR = zeros(size(R));
        dOm = zeros(size(Om));
        for i = 1:obj.nQ
           dR(:,:,i) = R(:,:,i)*hat(Om(:,i));
           dOm(:,i) = obj.quad(i).Jinv*(moments(:,i)-cross(Om(:,i), obj.quad(i).J*Om(:,i)));
        end
        
        
        % packing the state
        % -----------------
        dx = [v0; dq(:); ddtrans; dR(:); dOm(:)];        
    end
    
    function [A, B] = get_variation_lin_dyn(obj, xd, dxd, ud)
        
        O = zeros(3,3);
        Id = eye(3);
        [x0d, qd, v0d, dqd,  Rd,  Omd] = unzipState(obj, xd);
        [~,   ~,  a0d, d2qd, dRd, dOmd] = unzipState(obj, dxd);
        wd = zeros(3,obj.n);
        dwd = zeros(3,obj.n);
        for i = 1:obj.n
            wd(:,i) = cross(qd(:,i), dqd(:,i));
            dwd(:,i) = cross(qd(:,i), d2qd(:,i));
        end
        % extracting inputs
        % -------------------
        [fd, ~] = obj.unzipInputs(ud);
        
        % compute net translation forces
        % -------------------
        uk = zeros(3,obj.nvert);
        j = 1;
        for i = 1:obj.nvert
           uk(:,i) = obj.mge3(:,i);
           if obj.I(i)
               uk(:,i) = uk(:,i)+fd(j)*Rd(:,:,j)*obj.e3;
               j=j+1;
           end
        end
        
        % Mmat*[del-dv; dxi] = Fvec*[del-v; xi] + Gvec*[del-u]
        % ==============================================
        a = zeros(3, 3*obj.n);
        b = zeros(3, 3*obj.n);
        c = zeros(3*obj.n, 3*obj.n);
        d = zeros(3*obj.n, 3*obj.n);
        for i = 1:obj.n
            a(:,3*i-2:3*i) = obj.M{1,i+1}*(hat(dwd(:,i))-norm(wd(:,i))^2*Id)*hat(qd(:,i)); % <-------- identity here
            b(:,3*i-2:3*i) = obj.M{1,i+1}*2*qd(:,i)*wd(:,i)';
            for j = 1:obj.n
                if i == j
                    temp = obj.M{i+1,1}*hat(a0d) -obj.l(i)*hat(sum(uk(:,i+1:obj.nvert),2));
                    for k = 1:obj.n
                        if k~=i
                           temp = temp - obj.M{i+1,k+1}*(hat(hat(qd(:,k))*dwd(:,k))+norm(wd(:,k))^2*hat(qd(:,k))); 
                        end
                    end
                    c(3*i-2:3*i, 3*j-2:3*j) = temp*(-hat(qd(:,i)));
                    d(3*i-2:3*i, 3*j-2:3*j) = O;
                else
                    c(3*i-2:3*i, 3*j-2:3*j) = obj.M{i+1,j+1}*hat(qd(:,i))*(hat(dwd(:,j))-norm(wd(:,j))^2*Id)*hat(qd(:,j));
                    d(3*i-2:3*i, 3*j-2:3*j) = obj.M{i+1,j+1}*2*hat(qd(:,i))*qd(:,j)*wd(:,j)';
                end
            end
        end
        
        e = zeros(3, obj.nQ*3);
        g = zeros(3, obj.nQ);
        for i = 1:obj.nQ
           e(:,3*i-2:3*i) = -fd(i)*Rd(:,:,i)*hat(obj.e3); 
           g(:,i) = Rd(:,:,i)*obj.e3;
        end

        f = []; h = [];
        for k = 0:obj.n
            fcol = []; hcol = [];
            for i = 1:obj.n
                if obj.I(k+1)
                    if k>=i 
                        idx = find([obj.quad(:).ind]==k+1);
                        fcol_ = -obj.l(i)*hat(qd(:,i))*fd(idx)*Rd(:,:,idx)*hat(obj.e3);
                        hcol_ = obj.l(i)*hat(qd(:,i))*Rd(:,:,idx)*obj.e3;
                    else
                        fcol_ = zeros(3,3);
                        hcol_  =zeros(3,1);
                    end
                else
                    fcol_ = [];
                    hcol_ = [];
                end
                fcol = [fcol; fcol_];
                hcol = [hcol; hcol_];
            end
            f = [f, fcol];
            h = [h, hcol];
        end
               
        
        Mmat = obj.computeMassMatrix_om(qd);
        Fvec = [O, a, O, b, e, zeros(3, 3*obj.nQ);
             zeros(3*obj.n,3), c, zeros(3*obj.n,3), d, f, zeros(3*obj.n,3*obj.nQ)];
        Gvec = [[g; h] zeros(3*(obj.n+1), 3*obj.nQ)]; % [df1; df2; ...dfnQ; dM1, dM2, ....dMnQ];4nQ
        
        
        
        % linear dynamics
        % ==============
        alpha = []; beta  = [];
        gamma = []; nu = []; mu = [];
        for i = 1:obj.n
           alpha = blkdiag(alpha, qd(:,i)*qd(:,i)'*hat(wd(:,i))); 
           beta = blkdiag(beta, Id-qd(:,i)*qd(:,i)'); 
        end
        for i = 1:obj.nQ
           gamma = blkdiag(gamma, -hat(Omd(:,i)));
           nu = blkdiag(nu, obj.quad(i).Jinv*(hat(obj.quad(i).J*Omd(:,i))-hat(Omd(:,i))*obj.quad(i).J));
           mu = blkdiag(mu, obj.quad(i).Jinv);
        end
        
        
        A = [zeros(3,3), zeros(3,obj.n*3), eye(3), zeros(3,3*obj.n), zeros(3,obj.nQ*3), zeros(3,obj.nQ*3);
                zeros(3*obj.n,3), alpha, zeros(3*obj.n, 3), beta, zeros(3*obj.n,obj.nQ*3), zeros(3*obj.n,obj.nQ*3);
                Mmat\Fvec;
                zeros(3*obj.nQ,3), zeros(3*obj.nQ,obj.n*3), zeros(3*obj.nQ,3), zeros(3*obj.nQ,3*obj.n), gamma, eye(obj.nQ*3);
                zeros(3*obj.nQ,3), zeros(3*obj.nQ,obj.n*3), zeros(3*obj.nQ,3), zeros(3*obj.nQ,3*obj.n), zeros(obj.nQ*3,obj.nQ*3) , nu;]; 
         
       B = [zeros(3*(obj.n+1), 4*obj.nQ);
            Mmat\Gvec;
            zeros(3*obj.nQ, 4*obj.nQ);
            [zeros(3*obj.nQ, obj.nQ), mu]];
        
    end
end

%% visualizations
methods    
    function visualizeState(obj,varargin)    
        x = varargin{1};
        if nargin > 2
            cable_color = varargin{2};
        else
            cable_color = 'k';
        end
        
        [x0, q,~, ~, R, ~] = obj.unzipState(x);

        [xi] = obj.drawCable(x0, q, cable_color);
        for j = 1:obj.nQ
            obj.drawQuadrotor(xi(:,obj.setI(j)),R(:,:,j));
        end
        grid on;
        
        xlbl = xlabel('$$\textbf{X}$$','Interpreter','Latex'); xlbl.FontSize = 15;
        ylbl = ylabel('$$\textbf{Y}$$','Interpreter','Latex'); ylbl.FontSize = 15;
        zlbl = zlabel('$$\textbf{Z}$$','Interpreter','Latex'); zlbl.FontSize = 15;
        
%         d = sum(obj.l(:))*0.65;
% %         d = norm(xi(:,1)-xi(:,end))*0.6;
%         xc = mean(xi,2);
%         xlim([xc(1)-d, xc(1)+d]);
%         ylim([xc(2)-d, xc(2)+d]);
%         zlim([xc(3)-d, xc(3)+d]);
    end
    
    function visualizeState2(obj,varargin)    
        x = varargin{1};
        if nargin > 2
            cable_color = varargin{2};
        else
            cable_color = 'k';
        end
        
        [x0, q,~, ~, R, ~] = obj.unzipState(x);

        [xi, l1, s1] = obj.drawCable(x0, q, 'k');
        l1.Color(4) = 0.5;
        for j = 1:obj.nQ
    %             obj.drawQuadrotor(),);
            xQ = xi(:,obj.setI(j));
            R1 = R(:,:,j);
            s.L = 0.1; %length of quadrotor boom
            s.R = 0.065; %radius of propeller prop

            BRW = R1' ;
            point1 = BRW'*[s.L,0,0]';
            point2 = BRW'*[0,s.L,0]';
            point3 = BRW'*[-s.L,0,0]';
            point4 = BRW'*[0,-s.L,0]';

            p1 = BRW'*[s.L,0, 0.05]';
            p2 = BRW'*[0,s.L, 0.05]';
            p3 = BRW'*[-s.L,0, 0.05]';
            p4 = BRW'*[0,-s.L, 0.05]';

            nprop = 40;
            propangs = linspace(0,2*pi,nprop);
            proppts = s.R*BRW'*[cos(propangs);sin(propangs);zeros(1,nprop)];

            wp = xQ ;
            wp1 = [wp + point1, wp + p1]  ;
            wp2 = [wp + point2, wp + p2];
            wp3 = [wp + point3, wp + p3];
            wp4 = [wp + point4, wp + p4];


            prop1 = proppts + wp1(:,end)*ones(1,nprop);
            prop2 = proppts + wp2(:,end)*ones(1,nprop);
            prop3 = proppts + wp3(:,end)*ones(1,nprop);
            prop4 = proppts + wp4(:,end)*ones(1,nprop);

            lwp = 2 ;
            lwq = 0.25;1 ;
            lwc = 2 ;
            lwl = 2 ;

            s.qhandle1 = line([wp1(1,end), wp1(1,1), wp3(1,1), wp3(1,end)],...
                                [wp1(2,end), wp1(2,1), wp3(2,1), wp3(2,end)],...
                                [wp1(3,end), wp1(3,1), wp3(3,1), wp3(3,end)]); hold on ;
            s.qhandle2 = line([wp2(1,end), wp2(1,1), wp4(1,1), wp4(1,end)],...
                                [wp2(2,end), wp2(2,1), wp4(2,1), wp4(2,end)],...
                                [wp2(3,end), wp2(3,1), wp4(3,1), wp4(3,end)]); hold on ;
            set(s.qhandle1,'Color','k', 'LineWidth',lwq);
            set(s.qhandle2,'Color','k', 'LineWidth',lwq);
            scatter3([wp1(1,end), wp2(1,end), wp3(1,end), wp4(1,end)],...
                        [wp1(2,end), wp2(2,end), wp3(2,end), wp4(2,end)],...
                        [wp1(3,end), wp2(3,end), wp3(3,end), wp4(3,end)],1,'k','filled');

            s.hprop1 = fill3(prop1(1,:),prop1(2,:),prop1(3,:),[1 0 0],'FaceAlpha', 0.25);
            s.hprop2 = fill3(prop2(1,:),prop2(2,:),prop2(3,:),[0 0 01],'FaceAlpha', 0.25);
            s.hprop3 = fill3(prop3(1,:),prop3(2,:),prop3(3,:),[0 0 01],'FaceAlpha', 0.25);
            s.hprop4 = fill3(prop4(1,:),prop4(2,:),prop4(3,:),[0 0 01],'FaceAlpha', 0.25);


        end
        grid on;
        
        xlbl = xlabel('$$\textbf{X}$$','Interpreter','Latex'); xlbl.FontSize = 15;
        ylbl = ylabel('$$\textbf{Y}$$','Interpreter','Latex'); ylbl.FontSize = 15;
        zlbl = zlabel('$$\textbf{Z}$$','Interpreter','Latex'); zlbl.FontSize = 15;
    end
    
    function [xi,l1,s1] = drawCable(obj, x0, q, cable_color)
        xi = zeros(3,obj.nvert);
        xi(:,1) = x0;
        for i = 1:obj.n
            xi(:,i+1) = xi(:,i)+obj.l(i)*q(:,i);
        end
        
        l1 = plot3(xi(1,:),xi(2,:),xi(3,:),strcat('-',cable_color),'linewidth',0.5); hold on;
        s1 = scatter3(xi(1,:),xi(2,:),xi(3,:),2,'k','filled'); 
    end
        
    function drawQuadrotor(obj, xQ, R,varargin)
        s.L = 0.1; %length of quadrotor boom
        s.R = 0.065; %radius of propeller prop

        BRW = R' ;
        point1 = BRW'*[s.L,0,0]';
        point2 = BRW'*[0,s.L,0]';
        point3 = BRW'*[-s.L,0,0]';
        point4 = BRW'*[0,-s.L,0]';
        
        p1 = BRW'*[s.L,0, 0.05]';
        p2 = BRW'*[0,s.L, 0.05]';
        p3 = BRW'*[-s.L,0, 0.05]';
        p4 = BRW'*[0,-s.L, 0.05]';
        
        nprop = 40;
        propangs = linspace(0,2*pi,nprop);
        proppts = s.R*BRW'*[cos(propangs);sin(propangs);zeros(1,nprop)];

        wp = xQ ;
        wp1 = [wp + point1, wp + p1]  ;
        wp2 = [wp + point2, wp + p2];
        wp3 = [wp + point3, wp + p3];
        wp4 = [wp + point4, wp + p4];
        
        
        prop1 = proppts + wp1(:,end)*ones(1,nprop);
        prop2 = proppts + wp2(:,end)*ones(1,nprop);
        prop3 = proppts + wp3(:,end)*ones(1,nprop);
        prop4 = proppts + wp4(:,end)*ones(1,nprop);

        lwp = 2 ;
        lwq = 1 ;
        lwc = 2 ;
        lwl = 2 ;

        s.qhandle1 = line([wp1(1,end), wp1(1,1), wp3(1,1), wp3(1,end)],...
                            [wp1(2,end), wp1(2,1), wp3(2,1), wp3(2,end)],...
                            [wp1(3,end), wp1(3,1), wp3(3,1), wp3(3,end)]); hold on ;
        s.qhandle2 = line([wp2(1,end), wp2(1,1), wp4(1,1), wp4(1,end)],...
                            [wp2(2,end), wp2(2,1), wp4(2,1), wp4(2,end)],...
                            [wp2(3,end), wp2(3,1), wp4(3,1), wp4(3,end)]); hold on ;
        set(s.qhandle1,'Color','k', 'LineWidth',lwq);
        set(s.qhandle2,'Color','k', 'LineWidth',lwq);
        scatter3([wp1(1,end), wp2(1,end), wp3(1,end), wp4(1,end)],...
                    [wp1(2,end), wp2(2,end), wp3(2,end), wp4(2,end)],...
                    [wp1(3,end), wp2(3,end), wp3(3,end), wp4(3,end)],5,'k','filled');
                
        s.hprop1 = fill3(prop1(1,:),prop1(2,:),prop1(3,:),'r','FaceAlpha', 0.6);
        s.hprop2 = fill3(prop2(1,:),prop2(2,:),prop2(3,:),'b','FaceAlpha', 0.6);
        s.hprop3 = fill3(prop3(1,:),prop3(2,:),prop3(3,:),'b','FaceAlpha', 0.6);
        s.hprop4 = fill3(prop4(1,:),prop4(2,:),prop4(3,:),'b','FaceAlpha', 0.6);

    end
    
end


end