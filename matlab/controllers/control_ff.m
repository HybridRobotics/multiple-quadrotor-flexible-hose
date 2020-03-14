function [u] = control_ff(obj, t, x)
%%
%  control of independent quadrotors
%
%%
% get desired states and inputs
% ref = obj.flat2state(obj.trajectory(t));
ref = obj.get_desired_states(t);
u = ref.ud;
% [~, ~, ~, u] = Flat2state_mQpoint(obj.trajectory(t), obj);

% fprintf("t: %.4f\n",t);

end