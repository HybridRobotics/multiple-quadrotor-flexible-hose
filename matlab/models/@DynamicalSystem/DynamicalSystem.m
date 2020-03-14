classdef DynamicalSystem < handle
% Abstract class for creating dynamical models
properties 
    
    g = 9.81
    e1 = [1;0;0];
    e2 = [0;1;0];
    e3 = [0;0;1];
	dim = 3
        
    Data
    F
    G

    name

    nQ@double    % number of quadrotors = |setI|
    nDof
    nx
    nu

    calcCtrlInput@function_handle
    controller@function_handle
    trajectory@function_handle
    obstacle
    ctrlParams@struct
end

%%
methods 
    function obj = DynamicalSystem(varargin)

    end
	% set property values
    function obj = setProperty(obj, propertyName, value)
        if isprop(obj, propertyName)
            set(obj, propertyName, value);
        else
            error([propertyName ' not a property of class ',class(obj)]);
        end
    end
end

methods (Abstract)
    [dx] = get_dynamics(obj, x, u);
    [ref] = flat2state(obj, flats);
    draw_object(obj, varargin);
    animate(obj,opts_in);
end

%% 
methods % dynamics 
    
    function sol = simulate(obj, tspan, x0, solver)
        obj.calcCtrlInput = obj.controller;
        options = odeset('RelTol',1e-13,'AbsTol',1e-15);
        odefun = @(t,x)system_dynamics(obj, t, x);
        
        sol = solver(odefun, tspan, x0,options);
        
        [sol.x, sol.y] = even_sample(sol.x, sol.y, 250);
        sol.u = zeros(obj.nu,length(sol.x));
        for i  = 1:length(sol.x)
            sol.u(:,i) =  reshape(obj.controller(sol.x(i), sol.y(i,:)'), obj.nu,1);
        end
    end
    
    function sol = dsimulate(obj, tspan, x0, solver, opts)
        
        options = odeset('RelTol',1e-13,'AbsTol',1e-15);
        odefun = @(t,x)system_dynamics(obj, t, x);
        
        T = tspan(1):opts.dt:tspan(2);
        t = tspan(1);
        
        sol.u = zeros(obj.nu,length(T));
        sol.y = zeros(obj.nx,length(T));
        sol.x = T;
        
        sol.x(1) = t;
        sol.y(:,1) = x0;
        for i = 2:length(T)
            u = obj.controller(t,x0);
            obj.calcCtrlInput =  @(t,x) u;
            s_ = solver(odefun, [t, T(i)], x0,options);
            t = s_.x(end);
            x0 = s_.y(:,end);
            
            sol.u(:,i-1) = u;
            sol.x(i) = t;
            sol.y(:,i) = x0;
        end
        sol.u(:,end) = u;        

    end
    
    function dx = system_dynamics(obj,t,x)
        u = obj.calcCtrlInput(t,x);
        dx = obj.get_dynamics(x,u);
    end   
    
end

%% methods defined externally
methods
end
   
end 