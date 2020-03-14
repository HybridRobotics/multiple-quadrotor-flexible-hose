function[flats] = get_agrresive_traj(t)
% Function to generate Desired Differentially-Flat trajectory 
% 
% Author: vkotaru@andrew.cmu.edu
% Last Updated: 18-May-2016
% =====================================================================

% Parameters
f1 = 1/4; f2 = 1/5; f3 = 1/7;
ax = 2; ay = 2.5; az = 1.5;

%% positions
x0.x=[ax.*(1+(-1).*cos(2.*f1.*pi.*t));ay.*sin(2.*f2.*pi.*t);az.*cos(2.*f3.* ...
  pi.*t)];
x0.dx{1}=[2.*ax.*f1.*pi.*sin(2.*f1.*pi.*t);2.*ay.*f2.*pi.*cos(2.*f2.*pi.*t);(-2) ...
  .*az.*f3.*pi.*sin(2.*f3.*pi.*t)];


x0.dx{2}=[4.*ax.*f1.^2.*pi.^2.*cos(2.*f1.*pi.*t);(-4).*ay.*f2.^2.*pi.^2.*sin(2.* ...
  f2.*pi.*t);(-4).*az.*f3.^2.*pi.^2.*cos(2.*f3.*pi.*t)];


x0.dx{3}=[(-8).*ax.*f1.^3.*pi.^3.*sin(2.*f1.*pi.*t);(-8).*ay.*f2.^3.*pi.^3.*cos( ...
  2.*f2.*pi.*t);8.*az.*f3.^3.*pi.^3.*sin(2.*f3.*pi.*t)];


x0.dx{4}=[(-16).*ax.*f1.^4.*pi.^4.*cos(2.*f1.*pi.*t);16.*ay.*f2.^4.*pi.^4.*sin( ...
  2.*f2.*pi.*t);16.*az.*f3.^4.*pi.^4.*cos(2.*f3.*pi.*t)];


x0.dx{5}=[32.*ax.*f1.^5.*pi.^5.*sin(2.*f1.*pi.*t);32.*ay.*f2.^5.*pi.^5.*cos(2.* ...
  f2.*pi.*t);(-32).*az.*f3.^5.*pi.^5.*sin(2.*f3.*pi.*t)];


x0.dx{6}=[64.*ax.*f1.^6.*pi.^6.*cos(2.*f1.*pi.*t);(-64).*ay.*f2.^6.*pi.^6.*sin( ...
  2.*f2.*pi.*t);(-64).*az.*f3.^6.*pi.^6.*cos(2.*f3.*pi.*t)];


x0.dx{7}=[(-128).*ax.*f1.^7.*pi.^7.*sin(2.*f1.*pi.*t);(-128).*ay.*f2.^7.*pi.^7.* ...
  cos(2.*f2.*pi.*t);128.*az.*f3.^7.*pi.^7.*sin(2.*f3.*pi.*t)];


x0.dx{8}=[(-256).*ax.*f1.^8.*pi.^8.*cos(2.*f1.*pi.*t);256.*ay.*f2.^8.*pi.^8.*sin( ...
  2.*f2.*pi.*t);256.*az.*f3.^8.*pi.^8.*cos(2.*f3.*pi.*t)];


x0.dx{9}=[512.*ax.*f1.^9.*pi.^9.*sin(2.*f1.*pi.*t);512.*ay.*f2.^9.*pi.^9.*cos(2.* ...
  f2.*pi.*t);(-512).*az.*f3.^9.*pi.^9.*sin(2.*f3.*pi.*t)];


x0.dx{10}=[1024.*ax.*f1.^10.*pi.^10.*cos(2.*f1.*pi.*t);(-1024).*ay.*f2.^10.* ...
  pi.^10.*sin(2.*f2.*pi.*t);(-1024).*az.*f3.^10.*pi.^10.*cos(2.*f3.*pi.*t) ...
  ];


x0.dx{11}=[(-2048).*ax.*f1.^11.*pi.^11.*sin(2.*f1.*pi.*t);(-2048).*ay.*f2.^11.* ...
  pi.^11.*cos(2.*f2.*pi.*t);2048.*az.*f3.^11.*pi.^11.*sin(2.*f3.*pi.*t)]; ...
  


x0.dx{12}=[(-4096).*ax.*f1.^12.*pi.^12.*cos(2.*f1.*pi.*t);4096.*ay.*f2.^12.* ...
  pi.^12.*sin(2.*f2.*pi.*t);4096.*az.*f3.^12.*pi.^12.*cos(2.*f3.*pi.*t)]; ...
  


x0.dx{13}=[8192.*ax.*f1.^13.*pi.^13.*sin(2.*f1.*pi.*t);8192.*ay.*f2.^13.*pi.^13.* ...
  cos(2.*f2.*pi.*t);(-8192).*az.*f3.^13.*pi.^13.*sin(2.*f3.*pi.*t)];


x0.dx{14}=[16384.*ax.*f1.^14.*pi.^14.*cos(2.*f1.*pi.*t);(-16384).*ay.*f2.^14.* ...
  pi.^14.*sin(2.*f2.*pi.*t);(-16384).*az.*f3.^14.*pi.^14.*cos(2.*f3.*pi.* ...
  t)];
flats.x0 = x0;

%% tensions in the cable
q = getUnitvectorsnDerivatives(t);
flats.T.T = q.q;
flats.T.dT = q.dq;

end
