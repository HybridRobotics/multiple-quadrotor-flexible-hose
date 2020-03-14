function [u] = naive_indep(obj,t,x)
%%
%
u = zeros(4,obj.nQ);
mdist  = sum(obj.mbar(:))/obj.nQ;
for i = 1:obj.nQ
   u(:,i) = [mdist*obj.g; zeros(3,1) ];
end
fprintf("t: %.4f\n",t);
return;


% compute desired state
ref = obj.flat2state(t);
[xvd] = obj.computeVertices(ref.x);
xQd = zeros(3,obj.nQ);
for i = 1:obj.nQ
   xQd(:,i) = xvd(:,obj.setI(i))-[0.2*(i-1);0;0]; 
end
vQd = zeros(3,obj.nQ);

% unpack state
[~, ~, ~, ~, Rarray, Omarray] = obj.unzipState(x);
[xi, vi] = obj.computeVertices(x);
xQ = zeros(3,obj.nQ); vQ = zeros(3,obj.nQ);
for i = 1:obj.nQ
    xQ(:,i) = xi(:,obj.setI(i));
    vQ(:,i) = vi(:,obj.setI(i));
end

%% computing inputs
% gains
% -----
% kR =  0.65*eye(3); % 0.05*diag([400.0, 400.0,400.0]);
% kOm = 0.11*eye(3); % 0.05*diag([80.0, 80.0,80.0]);
% kx =  12.8*eye(3); % 2*diag([1.0, 1.0,1.0]);
% kv =  4.22*eye(3); % 2*diag([.8, .8,0.8]);
                        
kR =  0.5*diag([400.0, 400.0,400.0]);
kOm = 0.5*diag([80.0, 80.0,80.0]);
kx =  2*diag([1.0, 1.0,1.0]);
kv =  2*diag([.8, .8,0.8]);
                        
% control
% -------
mdist  = sum(obj.mbar(:))/obj.nQ;
uarray = zeros(4,obj.nQ);
for i = 1:obj.nQ
    % calculating errors
    err_x = xQ(:,i) - xQd(:,i);
    err_v = vQ(:,i) - vQd(:,i);

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
    
   uarray(:,i) = [f; M];
end
u = uarray(:);
fprintf("t: %.4f\n",t);
end