function [output] = optimize_for_des_state(obj, pos)
%%
%
% pos [3, nQ];
%% parsing inputs
% if size(pos,2) ~= obj.nQ
%    warning('number of position ~= number of drones');
%    pos = linspace(pos(:,1), pos(:,end), obj.nQ);
% end
if norm(pos(:,1)-pos(:,end))>sum(obj.l(:))
    error('infeasible positions');
end

% decision variables: x: 
%               F = [3,obj.nQ] quad thrust
%               c = [1, n] magnitude of the tensions
%               q = [3, n] attitude of the tensions

x0 = repmat([1; 0; 0], 1, obj.n);
x0 = [zeros(3*obj.nQ,1); ones(obj.n,1); x0(:)];

A = []; b= [];
Aeq = []; beq = [];
lb = []; ub = [];
options = optimoptions('fmincon','Display','off','Algorithm','sqp', 'StepTolerance', 1e-10, 'ConstraintTolerance', 1e-10);
nonlcon = @constraints;

[x,~,~,~] = fmincon(@cost_fun,x0,A,b,Aeq,beq,lb,ub,nonlcon,options);


FvecsSol = reshape(x(1:3*obj.nQ),3,obj.nQ); x(1:3*obj.nQ) =[];
magSol = x(1:obj.n)';
qSol = reshape(x(obj.n+1:end),3,obj.n);
% xp = pos(:,1);
% for iter = 1:obj.n
%     xp = [xp, xp(:,iter)+obj.l(iter)*qSol(:,iter)];
% end
% figure;
% plot3(xp(1,:),xp(2,:),xp(3,:),'-o','linewidth',2);
% axis equal;
% grid on; grid minor;

output.F = FvecsSol;
output.q = qSol;
output.T = magSol.*qSol;
output.normT = magSol;

function [cost] = cost_fun(x)
    % cost: sum of the square of the tension norms
    % i.e., ||T1||^2+...||Tn||^2
    cost = x(1:3*obj.nQ)'*x(1:3*obj.nQ);
end

function [c,ceq] = constraints(x)
    c = [];
    ceq = [];
    Fvecs = reshape(x(1:3*obj.nQ),3,obj.nQ); x(1:3*obj.nQ) =[];
    mag = x(1:obj.n);
    q = reshape(x(obj.n+1:end),3,obj.n);

    % constraint on the positions and link attitudes
    for k = 2:(obj.nQ)
        lhspos = pos(:,1);
        for i = 1:(obj.setI(k)-1)
           lhspos = lhspos+(obj.l(i)*q(:,i));
        end
        rhspos = pos(:,k);
        ceq = [ceq; lhspos-rhspos];
    end
    
    % unit norms
    for i = 1:obj.n
        ceq = [ceq; q(:,i)'*q(:,i)-1];
    end
    
    % tensions
    j = 1;
    for i = 1:obj.nvert
       if obj.I(i)
          if i == 1
              ceq = [ceq; obj.mge3(:,i)+(mag(i)*q(:,i))+Fvecs(:,j)];  
          elseif i == obj.nvert
              ceq = [ceq; obj.mge3(:,i)-(mag(i-1)*q(:,i-1))+Fvecs(:,j)];
          else
              ceq = [ceq; obj.mge3(:,i)+(mag(i)*q(:,i))-(mag(i-1)*q(:,i-1))+Fvecs(:,j)];
          end           
          j = j+1;     
       else
          if i == 1
              ceq = [ceq; obj.mge3(:,i)+(mag(i)*q(:,i))];  
          elseif i == obj.nvert
              ceq = [ceq; obj.mge3(:,i)-(mag(i-1)*q(:,i-1))];
          else
              ceq = [ceq; obj.mge3(:,i)+(mag(i)*q(:,i))-(mag(i-1)*q(:,i-1))];
          end           
           
       end 
    end

end

end