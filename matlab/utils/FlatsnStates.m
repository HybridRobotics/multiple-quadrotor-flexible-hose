classdef FlatsnStates < handle 
properties
    nlink@double % number of links
    nvert@double % number of vertices
    I@double
    tensions = struct('T', [], 'normT', [], 'dT', [], 'dnormT', []);
    positions = struct('x', [], 'dx', []);
    attitudes = struct('q', [], 'dq', []);
    quad = struct('attitude', struct('R', [], 'dR', [],  'd2R', [], 'Om', [], 'dOm', [],'f',[],'M',[]),...
                    'index',[]);
    iq = 1;
    
    getNormDerivatives@function_handle
    getUnitvectorsFromTensions@function_handle
end
methods
    function obj = FlatsnStates(varargin)
        obj.nlink = varargin{1};
        obj.nvert = obj.nlink+1;
        obj.I = varargin{2};
        
        if nargin > 2
            func_type = varargin{3};
        else
            func_type = 'default';
        end
        
        if strcmp(func_type, 'mex')
            obj.getNormDerivatives = @getNormDerivatives14_mex;
            obj.getUnitvectorsFromTensions = @getUnitvectorsFromTensions14_mex;
        else
            obj.getNormDerivatives = @getNormDerivatives14;
            obj.getUnitvectorsFromTensions = @getUnitvectorsFromTensions14;
        end
        
    end
%% set functions
    function set_position_at(obj, i, x)
       % position of vertex i
       obj.positions(i+1).x = x.x;
       obj.positions(i+1).dx = x.dx;
    end
    
    function set_tension_in_link(obj, i, T)
        % tension in link i
       obj.tensions(i).T = T.T;
       obj.tensions(i).dT = T.dT;
       [obj.tensions(i).normT, obj.tensions(i).dnormT] =  obj.getNormDerivatives(T.T, T.dT);
       
       % computing load attitudes
       [obj.attitudes(i).q, obj.attitudes(i).dq] = obj.getUnitvectorsFromTensions(T.T, T.dT, obj.tensions(i).normT, obj.tensions(i).dnormT);
    end
    
    function set_attitude_of_link(obj, i, q)
        % attitude of link i
       obj.attitudes(i).q = q.q;
       obj.attitudes(i).dq = q.dq;
    end
    
    function set_quad_at(obj, i, quad)
        % quad states at index i
       obj.quad(obj.iq).attitude = quad;
       obj.quad(obj.iq).index = i;
       obj.iq = obj.iq+1;
       
    end
    
%% get function
    function [out] = position_at(obj, i)
       % position of vertex i
       out = obj.positions(i+1);
%        dout = obj.positions(i+1).dx;
    end
    
    function [out] = tension_in_link(obj, i)
        % tension in link i
        [out] = obj.tensions(i);
%         [dout] = obj.tensions(i).dT;
    end
    
    function [out] = attitude_of_link(obj, i)
        % attitude of link i
        [out] = obj.attitudes(i);
%         [dout] = obj.attitudes(i).dq;
    end
    
end

    
end