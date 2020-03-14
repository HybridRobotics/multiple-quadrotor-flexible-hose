function[flats] = set_point(t)
% Function to generate Desired Differentially-Flat trajectory 
% 
% Author: vkotaru@andrew.cmu.edu
% Last Updated: 18-May-2016
% =====================================================================



%% positions
x0.x= ones(3,1);
for i = 1:14
    x0.dx{i} = zeros(3,1);
end

flats.x0 = x0;

%% tensions in the cable
q = getUnitvectorsnDerivatives(t);
flats.T.T = q.q;
flats.T.dT = q.dq;

end
