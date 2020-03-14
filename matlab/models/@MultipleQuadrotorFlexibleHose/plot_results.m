function plot_results(obj, sol)

figure;
subplot(2,2,1); hold on;
plot(sol.t, sol.errx, 'linewidth',1);
latex_title('$$\|x-x_d\|$$');
grid on; grid minor;

subplot(2,2,2); hold on;
plot(sol.t, sol.errv, 'linewidth',1);
latex_title('$$\|v-v_d\|$$');
grid on; grid minor;

subplot(2,2,3); hold on;
for i = 1:obj.n
    plot(sol.t, sol.Psiq(:,i), 'linewidth',1);
end
latex_title('$$\Psi_q$$');
grid on; grid minor;

subplot(2,2,4); hold on;
for i = 1:obj.nQ
    plot(sol.t, sol.PsiR(:,i), 'linewidth',1);
end
latex_title('$$\Psi_R$$');
grid on; grid minor;




end