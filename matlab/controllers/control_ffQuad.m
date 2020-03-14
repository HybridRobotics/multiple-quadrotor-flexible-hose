function [u] = control_ffQuad(obj, t, x)
%%
%  control of independent quadrotors
%
%% get desired stated
% =====================================
% ref = obj.flat2state(obj.trajectory(t));
ref = obj.get_desired_states(t);

%% extracting state
% =====================================
[~, ~, ~, ~, Rall, Omall] = obj.unzipState(x);
[xi, vi] = obj.computeVertices(x);


%% control input
% =====================================
kR =  diag([400.0, 400.0,400.0]);
kOm = diag([80.0, 80.0,80.0]);
kx =  2*diag([1.0, 1.0,1.0]);
kv =  2*diag([.8, .8,0.8]);

u = zeros(4,obj.nQ);
for i = 1:obj.nQ
    idx = obj.setI(i);
    
    xQd = ref.states.positions(idx).x;
    vQd = ref.states.positions(idx).dx(:,1);
    aQd = ref.states.positions(idx).dx(:,2);
    if idx==1
        Td = ref.states.tensions(idx).T;
    elseif idx == obj.nvert
        Td = -ref.states.tensions(idx-1).T;
    else
        Td = ref.states.tensions(idx).T-ref.states.tensions(idx-1).T;
    end
    
    % calculating errors
    err_x = xi(:, idx) - xQd;
    err_v = vi(:, idx) - vQd;

    Fff = obj.quad(i).mQ*(obj.g*obj.e3 + aQd)-Td;
    Fpd = -kx*err_x - kv*err_v;
    F = Fff+Fpd;

    % attitude ctrl
    % -------------
    % calculating desired orientation
    Omega = Omall(:,i);
    R = Rall(:,:,i);
    
    b3c = F/norm(F);
    b3 = R(:,3) ;
    f = dot2(F,b3) ;

    b1d = obj.e1;
    b1c = -vec_cross(b3c,vec_cross(b3c,b1d));
    b1c = b1c/norm(vec_cross(b3c,b1d));
    Rc = [b1c vec_cross(b3c,b1c) b3c];
    Rd = Rc;
    
    Omegad = ref.states.quad(i).attitude.Om;
    dOmegad = ref.states.quad(i).attitude.dOm;
    J = obj.quad(i).J;
    
    eR = errorRot(R, Rd);
    eOmega = errorOmega(Omega, R, Omegad, Rd);
    M = -kR*eR - kOm*eOmega + vec_cross(Omega, J*Omega)...
    - J*(hat_map(Omega)*R'*Rd*Omegad - R'*Rd*dOmegad) ;
    
   u(:,i) = [f; M];
end
% fprintf("t: %.4f\n",t);

end