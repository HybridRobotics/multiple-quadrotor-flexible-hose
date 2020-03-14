function [u] = control_lqr(obj, t, x)
%%
%  FINITE-TIME HORIZON LQR on the Linearized Dynamics
%
%% get desired stated
% =====================================
% ref = obj.flat2state(obj.trajectory(t));
ref = obj.get_desired_states(t);

%% computing errors;
% =====================================
error = obj.error(x, ref.xd);

%% control input
% =====================================
u = ref.ud;
[~, B] = obj.get_variation_lin_dyn( ref.xd, ref.dxd, ref.ud);
m = size(B,1);

Pvec = interp1(obj.ctrlParams.tRecatti, obj.ctrlParams.PRecatti, t);
P = reshape(Pvec, m, m);
K = obj.ctrlParams.R\B'*P;

%%
delu = -K*error;
df = delu(1:obj.nQ)';
dM = reshape(delu(obj.nQ+1:end),3, obj.nQ);

u = ref.ud + [df; dM];
fprintf("t: %.4f\n",t);

end