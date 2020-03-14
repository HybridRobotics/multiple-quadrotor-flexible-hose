function [ref] = computeSetpoint(mdl, pos)

[ref] = optimize_for_des_state(mdl, pos);

Fd = ref.F;
qd = ref.q;


% xp = pos(:,1);
% for iter = 1:mdl.n
%     xp = [xp, xp(:,iter)+mdl.l(iter)*qd(:,iter)];
% end
xp = mdl.computeVertices2(pos(:,1), qd);

%%
% -------------------
% plot3(xp(1,:),xp(2,:),xp(3,:),'-o','linewidth',2);
plot(xp(1,:),xp(3,:),'-','linewidth',2); hold on;
for i = mdl.setI
    s = scatter(xp(1,i), xp(3,i), 100, 'h', 'MarkerEdgeColor',[0 .5 .5],...
              'MarkerFaceColor',[0.7 .0 .2],...
              'LineWidth',0.5);
end
latex_legend({'hose', 'quadrotors'});
axis equal;
grid on; grid minor;
latex_xlabel('x');latex_ylabel('z');
latex_title('Setpoint-visualization');
drawnow;
% -------------------

%%
Rd = zeros(3,3,mdl.nQ);
ud = zeros(4, mdl.nQ);
for i = 1:mdl.nQ
    fd = norm(Fd(:,i));
    b3 = Fd(:,i)/fd;    
    b1d = [1; 0; 0];
    
    b3_b1d = vec_cross(b3, b1d) ;
    norm_b3_b1d = norm(b3_b1d) ;
    b1 = - vec_cross(b3, b3_b1d) / norm_b3_b1d ;
    b2 = vec_cross(b3, b1) ;
    Rd(:,:,i) = [b1 b2 b3] ;
    Md = zeros(3,1);
    
    ud(:,i) = [fd;  Md];
    ref.states.quad(i).attitude.R = Rd;
    ref.states.quad(i).attitude.Om = zeros(3,1);
    ref.states.quad(i).attitude.dOm = zeros(3,1);
end

% computing xd
ref.xd = mdl.zipState(zeros(3,1), qd, zeros(3,1), zeros(3,mdl.n), Rd, zeros(3,mdl.nQ));
ref.dxd = mdl.zipState(zeros(3,1), zeros(3, mdl.n), zeros(3,1), zeros(3,mdl.n), zeros(3,3, mdl.nQ), zeros(3,mdl.nQ));
ref.ud = ud;

for i = 1:mdl.nvert
    ref.states.positions(i).x = xp(:,i);
    ref.states.positions(i).dx = zeros(1,14);
end
for i = 1:mdl.n
    ref.states.attitudes(i).q = ref.q(:,i);
    ref.states.attitudes(i).dq = zeros(3,14);
    ref.states.tensions(i).T = ref.T(:,i);
    ref.states.tensions(i).dT = zeros(3,14);
end
% save(strcat('xd_n',num2str(n),'.mat'),'ref');
% save(strcat('tensions_n',num2str(n),'.mat'),'tensions');
end