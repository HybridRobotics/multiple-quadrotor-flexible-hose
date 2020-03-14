% function generateTensions2Unitvectors()
clear; close all;

n = 5;
max_derv = 2*n+4;

% defining symbols
% ----------------
syms normT real                 % tension and its norm
T = sym('T',[3,1],'real');      % tension
dT      = sym('dT', [3, max_derv],'real');   % tension derivatives
dnormT  = sym('dnormT', [max_derv,1], 'real'); % derivative of norms

% computing derivatives of the norm of the tension
% ------------------------------------------------
dnT_ = dot2(T,dT(:,1))./normT;

dnT = dnT_;
for i = 2:max_derv
    fprintf("performing %d th derivation of the norm\n", i);
    dnT = [dnT; jacobian(dnT(i-1), [normT; dnormT(1:i-1); T; reshape(dT(:,1:i-1), 3*(i-1), 1)])*[dnormT(1:i); reshape(dT(:,1:i),3*i,1)]];
end

% for i = 2:max_derv
%     fprintf("performing %d th derivation of the norm\n", i);
%     dnT = [dnT, jacobian(dnT(:,i-1),  )];
% end

% q = T/normT;
% 
% dq = jacobian(q,[normT; T])*[dnormT; dT(:,1)]; % first derivative
% for i = 2:max_derv
%     fprintf("performing %d th derivation\n", i);
%     dq = [dq, jacobian(dq(:,i-1), [normT; T; reshape(dT(:,1:i-1), 3*(i-1), 1)])*[dnormT; reshape(dT(:,1:i),3*i,1)]];
% end
% 

% end

%% 
% syms t real
% syms x(t) y(t) z(t) normT(t) dx dy dz nT
% % 
% % n = 5;
% % dT = sym('dT',
% 
% B = [x;y;z];
% q = B./normT(t);
% dnormT = (x(t)*diff(x(t),t) + y(t)*diff(y(t),t) + z(t)*diff(z(t),t) )./normT(t);
% 
% dq = derv(q,t, dnormT);
% 
% dq_ = subs(dq, {diff(x(t),t), diff(y(t),t), diff(z(t),t)}, {dx, dy, dz});
% 
% for i = 2:n
%     dq{i} = derv(dq{i-1},t);
% end
% 
% 
% end
% 
% function [dq] = derv(q,t, nT)
% 
% dq = diff(q,t);
% subs(dq, {diff(normT(t), t)}, {nT})
% 
% end
% 
% function [out] = mynorm(v)
% out = sqrt(v(1).^2 + v(2).^2 + v(3).^2 );
% end