function [sol] = compute_errors(obj,sol)
T = length(sol.t);

sol.errx = zeros(T,1);
sol.errv = zeros(T,1);
sol.errq = zeros(T,3, obj.n);
sol.errdq = zeros(T, 3, obj.n);
sol.Psiq = zeros(T,obj.n);
sol.errR = zeros(T, 3, obj.nQ);
sol.errOm = zeros(T, 3, obj.nQ);
sol.PsiR = zeros(T, obj.nQ);

for i = 1:length(sol.t)
    % 
    [~, sol.errx(i), sol.errv(i),....
        sol.errq(i,:,:), sol.errdq(i,:,:), sol.Psiq(i,:),...
        sol.errR(i,:,:), sol.errOm(i,:,:), sol.PsiR(i,:)] = obj.error(sol.x(i,:)', sol.xd(i,:)');    
end



end
