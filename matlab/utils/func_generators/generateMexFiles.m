clear; close all;

%% test_function
% % sample data
% xsample = rand(10,2);
% ysample = 2;
% [a, b] = test_function(xsample, ysample)
% 
% % defining variable type
% xVarType = coder.typeof(xsample, [inf 2], [true false]);
% yVarType = coder.typeof(ysample, [1 1], [false]);
% 
% % generating mex files
% % codegen test_function -args {xVarType yVarType} -nargout 2
% 
% % testing mex files
% xsample = rand(1000,2);
% ysample = 5;
% tic
% [a, b] = test_function(xsample, ysample);
% toc
% tic
% [a, b] = test_function_mex(xsample, ysample);
% toc

% %% getNormDerivatives
% % sample data
% f = getUnitvectorsnDerivatives(-1);
% T = 10*f.q;
% dT = 10*f.dq;
% [normT, dnormT] = getNormDerivatives14(T,dT);
% 
% % variable type
% fprintf("defining variable type\n");
% TVarType = coder.typeof(T, [3 1], [0 0]);
% dTVarType = coder.typeof(dT, [3, 30], [0, 1]);
% 
% % generating mex file
% fprintf("generating mex file ... \n");
% codegen getNormDerivatives14 -args {TVarType dTVarType} -nargout 2
% 
% % testing mex file
% fprintf("testing mex file\n");
% time = 0:0.1:1;
% tic
% for t = 1:length(time)
% %     fprintf("time: %f\n",time(t));
% f = getUnitvectorsnDerivatives(time(t));
% T = 10*f.q;
% dT = 10*f.dq;
% 
% [normT, dnormT] = getNormDerivatives14(T, dT);
% end
% toc
% tic
% for t = 1:length(time)
% %     fprintf("time: %f\n",time(t));
% f = getUnitvectorsnDerivatives(time(t));
% T = 10*f.q;
% dT = 10*f.dq;
% 
% [normT, dnormT] = getNormDerivatives14_mex(T, dT);
% end
% toc
% 
% %% getUnitvectorsnDerivatives
% % sample data
% f = getUnitvectorsnDerivatives(-1);
% T = 10*f.q;
% normT = norm(T);
% dT = 10*f.dq;
% for i  = 1:length(dT)
%     dnormT(i) = norm(dT(:,i));
% end
% 
% [q, dq] = getUnitvectorsFromTensions14(T, dT, normT, dnormT);
% 
% % variable type
% T_vt = coder.typeof(T, [3 1], [0 0]);
% dT_vt = coder.typeof(dT, [3, 30], [0, 1]);
% normT_vt = coder.typeof(normT, [1, 1], [0, 0]);
% dnormT_vt = coder.typeof(dnormT, [1, 30], [0, 1]);
% 
% % generating mex file
% codegen getUnitvectorsFromTensions14 -args {T_vt dT_vt normT_vt dnormT_vt} -nargout 2
% 
% % testing mex file
% time = 0:0.01:100;
% 
% tic
% for t = 1:length(time)
% %     fprintf("time: %f\n",time(t));
% f = getUnitvectorsnDerivatives(time(t));
% T = 10*f.q;
% normT = norm(T);
% dT = 10*f.dq;
% for i  = 1:length(dT)
%     dnormT(i) = norm(dT(:,i));
% end
% 
% [q, dq] = getUnitvectorsFromTensions14(T, dT, normT, dnormT);
% end
% toc
% 
% tic
% for t = 1:length(time)
% %     fprintf("time: %f\n",time(t));
% f = getUnitvectorsnDerivatives(time(t));
% f.dq(:,10:end) = [];
% T = 10*f.q;
% normT = norm(T);
% dT = 10*f.dq;
% for i  = 1:length(dT)
%     dnormT(i) = norm(dT(:,i));
% end
% 
% [q, dq] = getUnitvectorsFromTensions14_mex(T, dT, normT, dnormT);
% end
% toc

%% dyanmics
% sample data
addpath('../../models');
addpath('../../controllers');
addpath(genpath('../../utils'));

n = 5;
I =  [1, 6];

cable_length = 2; % mts
cable_mass   = 1; % kg

l = cable_length/n;
m = cable_mass/(n+1);
mdl = MultipleQuadrotorFlexibleHose('n',n,'setI',I,'l',l,'m',m, 'dynamics', 'default');
mdl.damp_coeff = 0.0;

t = 0:0.1:10;
[ref] = mdl.flat2state(get_agrresive_traj(0));

data.n      = mdl.n;
data.nQ     = mdl.nQ;
data.nvert  = mdl.nvert;
data.mge3   = mdl.mge3;
% data.setI   = mdl.setI;
data.I      = mdl.I;
data.l      = mdl.l;
data.Mtop   = mdl.Mtop;
data.mbar   = mdl.mbar;
for i = 1:mdl.nQ
    data.J(:,:,i)      = mdl.quad(i).J;
    data.Jinv(:,:,i)   = mdl.quad(i).Jinv;
end
% data.M = mdl.M;
data.M      = cell2mat(mdl.M);

[dx1] = afh_dynamics(data, ref.xd, ref.ud);
[dx0] = mdl.get_dx(ref.xd, ref.ud);

% defining variable type
d.n = coder.typeof(data.n);
d.nQ = coder.typeof(data.nQ);
d.nvert = coder.typeof(data.nvert);
d.mge3 = coder.typeof(data.mge3, [3,51], [0, 1]);
% d.setI = coder.typeof(data.setI, [1, 51], [0, 1]);
d.I = coder.typeof(data.I, [51, 1], [ 1, 0]);
d.l = coder.typeof(data.l,  [51, 1], [1, 0]);
d.Mtop = coder.typeof(data.Mtop, [3, 51*3], [0, 1]);
d.mbar = coder.typeof(data.mbar, [51, 1], [1, 0]);
d.J = coder.typeof(data.J, [3, 3, 51], [0, 0, 1]);
d.Jinv = coder.typeof(data.Jinv,[3, 3, 51], [0, 0, 1]);
d.M = coder.typeof(data.M, [51*3, 51*3], [1 1]);

% max size of state "x" vector
nx = 51*6+51*12;
nu = [4, 51];
dataVarType = coder.typeof(d);
xVarType = coder.typeof(ref.xd, [nx, 1], [1, 0]);
uVarType = coder.typeof(ref.ud, [4, 51], [0, 1]);

% generating mex file
codegen afh_dynamics -args {dataVarType xVarType uVarType}
 
[dx2] = afh_dynamics_mex(data, ref.xd, ref.ud);

% mex test
time = [0:0.01:10];

dx1 = []; dx2 = [];
t1 = [];t2 = [];
for it = 1:length(time)
   [ref] = mdl.flat2state(get_agrresive_traj(time(it)));
   tic
   dx1 = [dx1,  afh_dynamics(data, ref.xd, ref.ud)];
   toc;
   t1 = [t1; double(toc)];
   
   tic
   dx2 = [dx2,  afh_dynamics_mex(data, ref.xd, ref.ud)];
   toc;
   t2 = [t2; double(toc)];
end
mean(t1)
mean(t2)

%% afh_flatness
% sample data
% addpath('../../models');
% addpath('../../controllers');
% addpath(genpath('../../utils'));

% n = 5;
% I =  [1, 6];

% cable_length = 2; % mts
% cable_mass   = 1; % kg

% l = cable_length/n;
% m = cable_mass/(n+1);
% mdl = AerialFireHose('n',n,'setI',I,'l',l,'m',m, 'dynamics', 'default');
% mdl.damp_coeff = 0.0;

% t = 0:0.1:10;
% [ref] = mdl.flat2state(get_agrresive_traj(0));

% data.n      = mdl.n;
% data.nQ     = mdl.nQ;
% data.nvert  = mdl.nvert;
% data.mge3   = mdl.mge3;
% data.setI   = mdl.setI;
% data.I      = mdl.I;
% data.l      = mdl.l;
% data.Mtop   = mdl.Mtop;
% data.mbar   = mdl.mbar;
% for i = 1:mdl.nQ
%     data.J(:,:,i)      = mdl.quad(i).J;
%     data.Jinv(:,:,i)   = mdl.quad(i).Jinv;
% end
% data.M = mdl.M;
% data.M      = cell2mat(mdl.M);

% [ref] = afh_flat2state(get_agrresive_traj(0));







