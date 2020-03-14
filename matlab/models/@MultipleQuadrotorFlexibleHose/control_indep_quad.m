function [u] = control_indep_quad(obj, t, x)
%%
%  control of independent quadrotors
%
%%
% extracting states
[~,  ~, ~, ~, Rarray, Omarray] = unzipState(obj,x);
[xi, vi] = obj.computeVertices(x);

% computed desired stated
[xid] = obj.computeVertices2(zeros(3,1), repmat([1;0;0], 1,obj.n));
xid = xid+[0;1;0];
xQd = xid(:, obj.setI);
dxQ = [0:(obj.nQ-1)]*mean(obj.l)*2;
xQd(1,:) = xQd(1,:)-dxQ;

%% computing inputs
% gains
% -----
kR =  diag([400.0, 400.0,400.0]);
kOm = diag([80.0, 80.0,80.0]);
kx =  2*diag([1.0, 1.0,1.0]);
kv =  2*diag([.8, .8,0.8]);
                        
% control
% -------
mdist  = sum(obj.mbar(:))/obj.nQ;
u = zeros(4,obj.nQ);
for i = 1:obj.nQ
    % calculating errors
    err_x = xi(:, obj.setI(i)) - xQd(:,i);
    err_v = vi(:,obj.setI(i)) - zeros(3,1);

    Fff = mdist*(obj.g*obj.e3);
    Fpd = -kx*err_x - kv*err_v;
    F = Fff+Fpd;

    % attitude ctrl
    % -------------
    % calculating desired orientation
    Omega = Omarray(:,i);
    R = Rarray(:,:,i);
    
    b3c = F/norm(F);
    b3 = R(:,3) ;
    f = dot2(F,b3) ;

    b1d = obj.e1;
    b1c = -vec_cross(b3c,vec_cross(b3c,b1d));
    b1c = b1c/norm(vec_cross(b3c,b1d));
    Rc = [b1c vec_cross(b3c,b1c) b3c];
    Rd = Rc;
    
    Omegad = zeros(3,1); dOmegad = zeros(3,1);
    J = obj.quad(i).J;
    
    eR = errorRot(R, Rd);
    eOmega = errorOmega(Omega, R, Omegad, Rd);
    M = -kR*eR - kOm*eOmega + vec_cross(Omega, J*Omega)...
    - J*(hat_map(Omega)*R'*Rd*Omegad - R'*Rd*dOmegad) ;
    
   u(:,i) = [f; M];
end
fprintf("t: %.4f\n",t);

end