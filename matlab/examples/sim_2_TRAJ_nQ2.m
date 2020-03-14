%% Example 1
% Multiple quadrotors with flexible hose
% 
% nQ = 2
% n = 5
% I = {1, 6} (note: matlab index starts at 1)
% 

%% environment setup
clear; close all;
addpath('../models');
addpath('../controllers');
addpath(genpath('../utils'));
warning('off', 'MATLAB:catenate:DimensionMismatch');

%% script params
params.dynamics = 'mex'; % {'mex', 'default'}
params.traj_type = 'flatness'; % {'flatness', 'fixed'}
params.computeRecattiGains = true;

params.expName = 'setpoint_n10_nQ2';

params.visualizeFinalState 	= false;
params.saveMatFile          = false;
params.doAnimation          = true;
params.saveVideo            = false;

%% model setup
n = 5;          % number of links (S2)
I = [1];
I = [I, n+1];   % (n+1 is always part of I: differential flatness)

hose_l = 2;     % total hose length
hose_m = 2;     % total hose mass "without water"

l = hose_l/n;       % length of individual link (uniformly discretized)
m = hose_m/(n+1);   % mass of each point-mass

% creating model
% -------------
mdl =  MultipleQuadrotorFlexibleHose('n',n,'setI',I,'l',l,'m',m, ...
                              'dynamics', params.dynamics, 'xd', params.traj_type);

%% simulation-setup

% setpoint
% --------
% NOTE: params.traj_type should be 'fixed'
% ------------------
% %     quad1       quad2             quad3
% pos = [0.0,     0.4*hose_l,     0.8*hose_l; % x
%        0.0,          0,              0;     % y
%        1.0,         1.0,            1.0];   % z
% 
% ref = computeSetpoint(mdl, pos);
% mdl.updateDesiredStates(ref);

% desired trajectory
% ------------------
% NOTE: params.traj_type should be 'fixed'
% trajectories are defined in matlab/utils/trajs
% ------------------
% mdl.trajectory = @(t) set_point(t);
% mdl.trajectory = @(t) get_circular_traj(t, 0.2);
mdl.trajectory = @(t) get_agrresive_traj(t);

% time
% ----
t0 = 0;
tf = 10;
simtf = tf;

% initial condition
% -----------------
INIT_COND = 'perturb-cable'; % {'close', 'flatness', 'perturb-cable'}
xInit = mdl.get_init_cond('condition',INIT_COND,'dist', 0.1, 't0' , -1);


% Recatti gains
% -------------
Qx = 0.5*eye(6); 
Qq = 0.75*eye(mdl.n*6);
QR = eye(3*mdl.nQ);
QOm = 0.75*eye(3*mdl.nQ);
Q = blkdiag(Qx, Qq, QR, QOm);
sm = size(Q,1);

R  = 0.2*eye(mdl.nu);
P0 = 0.01*eye(sm);

ctrlParams.Q = Q;
ctrlParams.R = R;

if params.computeRecattiGains
    tic
    [ctrlParams.tRecatti, ctrlParams.PRecatti] = solveContRicattiEqn(mdl, t0, 25, Q, R, P0);
    toc
    ctrlParams.time_recatti = toc;
    save('recattiGains.mat','ctrlParams','-v7.3');
    mdl.ctrlParams = ctrlParams;
else
    load('recattiGains.mat');
    mdl.ctrlParams = ctrlParams;
end

% controller
% ----------
mdl.controller = @(t,x) control_lqr(mdl, t, x);
% mdl.controller = @(t,x) control_ff(mdl, t, x);
% mdl.controller = @(t,x) control_ffQuad(mdl, t, x);

%% simulation
% ----------
fprintf("simulating control for n=%d\n",n);
tic
sol = mdl.simulate([t0, simtf], xInit, @ode15s);
toc
time_to_simulate = toc;

% post-processing
% ---------------
[solution.t, solution.x] = even_sample(sol.x, sol.y, 100);
[~, solution.u] = even_sample(sol.x, sol.u, 100);
solution.xd = zeros(size(solution.x));
for it = 1:length(solution.t)
    ref = mdl.get_desired_states(solution.t(it));
    solution.xd(it,:) = ref.xd';
end
solution = mdl.compute_errors(solution);
mdl.plot_results(solution);

%% visualize

% filename
% --------
filename = strcat('_d',num2str(mdl.nQ),'_n',num2str(n),'_m',num2str(floor(1000*m)),'g_l',num2str(floor(l*100)),'cm');
save2file = strcat('results/',params.expName , filename, '_', datestr(datetime));


if params.visualizeFinalState
    figure;
    mdl.visualizeState(sol.y(end,:)');
end


% animation
% ---------
opts.t = solution.t;
opts.x = solution.x;
opts.xd = solution.xd;
opts.frame.move = true;

opts.RATE = 25;
opts.vid.MAKE_MOVIE = params.saveVideo;
opts.vid.filename = strcat(save2file);
if params.doAnimation
    mdl.animate(opts);
end

% saving mat
% ----------

if params.saveMatFile
    % saving whole workspace
    % save(save2file,  '-v7.3'); % this is usually a 1GB+
    
    % saving reduced data
    % -------------------
    data.time_to_getrecatti = ctrlParams.time_recatti;
    data.time_to_simulate = time_to_simulate;
    data.params = mdl.getModelParams();
    data.solution = solution;
    data.ctrlParams.Q = ctrlParams.Q;
    data.ctrlParams.R = ctrlParams.R;
    [data.ctrlParams.t, data.ctrlParams.P] = even_sample(ctrlParams.tRecatti, ctrlParams.PRecatti, 100);
    save(save2file,'data','-v7.3');
end

%% end
