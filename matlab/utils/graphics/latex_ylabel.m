function [t] = latex_ylabel(name_str,varargin)
t = ylabel(name_str,'Interpreter','Latex');
if nargin > 1
   t.FontSize = varargin{1}; 
else 
    t.FontSize = 15;
end

if nargin > 2
    t.Position = varargin{2};
end
end