%% Example 1
% Multiple quadrotors with flexible hose
% 

%% environment setup
clear; close all;
addpath('../models');
addpath('../controllers');
addpath(genpath('../utils'));
warning('off', 'MATLAB:catenate:DimensionMismatch');

%% script params
params.DYNAMICS = 'default'; % {'mex', 'default'}
params.COMPUTE_RECATTI_GAINS = true;
params.EXP_NAME = 'setpoint_n10_nQ2';

params.SAVE_MOVIE   = false;
params.SAVE_FILE    = false;
params.DO_ANIMATION	= true;
params.VIZ_FINAL_STATE 	= false;

%% model setup
n = 15;          % number of links (S2)
I = [1, 8];
I = [I, n+1];   % (n+1 is always part of I: differential flatness)

hose_l = 2;     % total hose length
hose_m = 2;     % total hose mass "without water"

l = hose_l/n;       % length of individual link (uniformly discretized)
m = hose_m/(n+1);   % mass of each point-mass

% creating model
% -------------
mdl =  MultipleQuadrotorFlexibleHose('n',n,'setI',I,'l',l,'m',m, ...
                              'dynamics', params.DYNAMICS, 'xd', 'fixed');

%% setpoint
pos = [0.0, 0.4*hose_l, 0.8*hose_l;
        0, 0, 0;
        1.0, 1, 1.0];
ref = computeSetpoint(mdl, pos);
mdl.updateDesiredStates(ref);

         

