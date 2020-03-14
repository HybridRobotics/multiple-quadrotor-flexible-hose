function [output] = optimize_tensions(obj, pos)
%%
%
% pos [3, nQ];
%% parsing inputs
if size(pos,2) ~= obj.nQ
   warning('number of position ~= number of drones');
   pos = linspace(pos(:,1), pos(:,end), obj.nQ);
end
if norm(pos(:,1)-pos(:,end))>sum(obj.l(:))
    error('infeasible positions');
end

% decision variables: T [3,n] tensions in the cable
ndvar = 4*obj.n;
x0 = repmat([1; 0; 0], 1, obj.n);
x0 = [ones(obj.n,1); x0(:)];

A = []; b= [];
Aeq = []; beq = [];
lb = []; ub = [];
options = optimoptions('fmincon','Display','iter','Algorithm','sqp', 'StepTolerance', 1e-10, 'ConstraintTolerance', 1e-10);
nonlcon = @constraints;

[x,~,~,~] = fmincon(@cost_fun,x0,A,b,Aeq,beq,lb,ub,nonlcon,options);

mag = x(1:obj.n)';
q = reshape(x(obj.n+1:end),3,obj.n);
xp = pos(:,1);
for iter = 1:obj.n
    xp = [xp, xp(:,iter)+obj.l(iter)*q(:,iter)];
end
figure;
plot3(xp(1,:),xp(2,:),xp(3,:),'-o','linewidth',2);
axis equal;
grid on; grid minor;

output.q = q;
output.T = mag.*q;
output.normT = mag;

function [cost] = cost_fun(x)
    % cost: sum of the square of the tension norms
    % i.e., ||T1||^2+...||Tn||^2
    cost = x(1:obj.n)'*x(1:obj.n);
end

function [c,ceq] = constraints(x)
    c = [];
    ceq = [];
    mag = x(1:obj.n);
    q = reshape(x(obj.n+1:end),3,obj.n);

    % constraint on the positions and link attitudes
    lhspos = pos(:,1);
    for i = 1:obj.n
       ceq = [ceq; q(:,i)'*q(:,i)-1];
       lhspos = lhspos+(obj.l(i)*q(:,i));
    end
    rhspos = pos(:,end);
    ceq = [ceq; lhspos-rhspos];

    % tensions
    for i = 2:(obj.n)
        ceq = [ceq; -obj.mbar(i)*obj.g*obj.e3+(mag(i)*q(:,i))-(mag(i-1)*q(:,i-1))];
    end

end

end