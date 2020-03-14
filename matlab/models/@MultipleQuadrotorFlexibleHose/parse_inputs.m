function parse_inputs(obj,varargin)
% argument parser
%%
    fprintf("parsing arguments\n");

    % default parameters
    dflt_n = 10;
    dflt_l = 0.25;
    dflt_m = 0.25;

    dflt_I = [1, 5, 11]; 
    dflt_mQ = 0.85;
    dflt_J = diag([0.557, 0.557, 1.05]*10e-2);
    
    dflt_cable_m = 1;
    dflt_cable_l = 1;
    
    dflt_dyn = 'default'; % 'damped', 'omega'
    dflt_des = 'flatness'; % 'fixed'
%     dflt_xdfile = 'xd.mat';

    % parser
    % ------
    p = inputParser;
    addOptional(p, 'n',     dflt_n);  % no.of links
    addOptional(p, 'setI',  dflt_I);  % drone indices
    addOptional(p, 'l',     dflt_l);  % lenght of the links
    addOptional(p, 'm',     dflt_m);  % vertex masses
    addOptional(p, 'mQ',    dflt_mQ); % drone masses
    addOptional(p, 'J',     dflt_J);  % drone Inertia
    addOptional(p, 'dynamics',     dflt_dyn);  % drone Inertia
%     addOptional(p, 'cable_length',     dflt_dyn);  % drone Inertia
%     addOptional(p, 'cable_mass',     dflt_dyn);  % drone Inertia
    addOptional(p, 'xd', dflt_des);
%     addOptional(p, 'matfile', dflt_xdfile);

    parse(p,varargin{:});

    % post parsing
    % ------------
    obj.n = p.Results.n;
    obj.nvert = obj.n+1;
    if length(p.Results.l)~=obj.n
        obj.l = p.Results.l*ones(obj.n,1);
    else
        obj.l = p.Results.l;
    end
    if length(p.Results.m)~=obj.nvert
        obj.m = p.Results.m*ones(obj.nvert,1);
    else
        obj.m = p.Results.m;
    end
    
    if strcmp(p.Results.dynamics, 'default')
        obj.get_dx = @obj.get_dyn_dq;
    elseif strcmp(p.Results.dynamics, 'damped')
        obj.get_dx = @obj.get_dyn_dq_damped;
    elseif strcmp(p.Results.dynamics, 'mex')
        obj.get_dx = @obj.get_dyn_dq_mex;
    end

    if strcmpi(p.Results.xd, 'flatness')
        obj.get_desired_states = @(t) obj.flat2state(obj.trajectory(t));
        
%     elseif strcmpi(p.Results.xd, 'fixed')
%         des = load(p.Results.matfile);
%         obj.get_desired_states = @(t) des.ref;
    end
        
    % quad params
    % -----------
    obj.setI = p.Results.setI; % set of indices with quadrotor
    obj.nQ = length(obj.setI);
    obj.mQ = zeros(obj.nvert,1);
    for i = 1:obj.nQ
        obj.mQ(obj.setI(i))=p.Results.mQ;
        obj.quad(i).mQ = p.Results.mQ;
        obj.quad(i).J  = p.Results.J;
        obj.quad(i).Jinv = inv(p.Results.J);
        obj.quad(i).ind = obj.setI(i);            
    end
    obj.nu = 4*obj.nQ;

    % indicator function
    % ------------------
    obj.I = zeros(obj.nvert,1);
    obj.I(obj.setI) = 1;

    % compute net-masses
    % ------------------
    obj.mbar = obj.mQ+obj.m;
    obj.getMbar = @(i) [obj.mQ(i+1)+obj.m(i+1)];

    obj.M00 = sum(obj.mbar(:));
    obj.M0i = @(i) sum(obj.mbar(i+1:obj.nvert))*obj.l(i); 
    obj.Mi0 = obj.M0i;
    obj.Mij = @(i,j) sum(obj.mbar(max(i+1,j+1):obj.nvert))*obj.l(i)*obj.l(j);



end 
