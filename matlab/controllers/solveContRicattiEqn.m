function [tRecatti, PRecatti] = solveContRicattiEqn(mdl, t0, tf, Q, R, P0, varargin)
fprintf("solving recatti equation\n");

nx = size(Q,1);
nu = size(R,1);

progressbar
[tRecatti, PRecatti] = ode45(@recattiIntegrand, [tf, t0], P0(:));

function [dx] = recattiIntegrand(t,x)
    P =  reshape(x, nx, nx);
%     ref = mdl.flat2state(mdl.trajectory(t));
    ref = mdl.get_desired_states(t);
    [A, B] = mdl.get_variation_lin_dyn(ref.xd, ref.dxd, ref.ud);
    
    dP = -(Q- (P*B*inv(R)*B'*P) + A'*P + P*A);
    dx  = dP(:);
    progressbar((tf-t)/tf);
end

end

