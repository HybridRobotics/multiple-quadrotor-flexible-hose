function animate(obj,opts_in)
% function to animate dynamics

%% default options
% data
opts_default.RATE = 25 * 2;
opts_default.t = [];
opts_default.x = [];
opts_default.xd = [0;0];
opts_default.td = [];
opts_default.interp_type = 'spline';

% video
opts_default.vid.MAKE_MOVIE = 0;
opts_default.vid.filename = 'results/vid1';
opts_default.vid.Quality = 100;
opts_default.vid.FrameRate = 24;

% objects
opts_default.figure.x.limits = [-4 4];
opts_default.figure.y.limits = [-4 4];
opts_default.figure.z.limits = [-4 4];
opts_default.figure.scale = 1.5;
opts_default.hist = 100;
% plots
opts_default.plot2D.N = 1;
opts_default.plot3D.N = 1;
opts_default.obj.N = 1; 

%% get inputs
options_struct_overlay.AllowNew = true;
opts = struct_overlay(opts_default,opts_in, options_struct_overlay);

%% initialize the animation figure and axes
    fig_handle = figure;

    set(0,'Units','pixels')
    scnsize = get(0,'ScreenSize');

    screen_width = scnsize(3);
    screen_height = scnsize(4);

    % find the minimum scaling factor
    figure_x_size = opts.figure.x.limits(2) - opts.figure.x.limits(1);
    figure_y_size = opts.figure.y.limits(2) - opts.figure.y.limits(1);

    xfactor = screen_width/figure_x_size;
    yfactor = screen_height/figure_y_size;

    if (xfactor < yfactor)
      screen_factor = 2.5*xfactor;
    else
      screen_factor = 2.5*yfactor;
    end

    % calculate screen offsets
    screen_x_offset = (screen_width - screen_factor*figure_x_size)/2;
    screen_y_offset = (screen_height - screen_factor*figure_y_size)/2;

    % draw figure and axes
    set(fig_handle,'Position', [screen_x_offset screen_y_offset...
        opts.figure.scale*screen_factor*figure_x_size...
        opts.figure.scale*screen_factor*figure_y_size]);
    set(fig_handle,'MenuBar', 'none');
    axes1 = axes;
    set(axes1,'XLim',opts.figure.x.limits,'YLim',opts.figure.y.limits, 'ZLim', opts.figure.z.limits);
%     set(axes1,'Position',[0 0 1 1]);
%     set(axes1,'Color','w');
%     set(axes1,'TickDir','out');
    axis equal ;
    

%% extract data
    RATE = opts.RATE;
    t = opts.t;
    x = opts.x;
    td = opts.td;
    xd = opts.xd;
    
    if isrow(t)
        t = t';
    end
    if size(x,2)>size(x,1)
        x = x';
    end
    if isrow(td)
        td = td';
    end
    if size(xd,2)>size(xd,1)
        xd = xd';
    end

    box on;
    
    [t, x] = even_sample(t, x, RATE,opts.interp_type);
    t = t+t(1);    
    
    xd_flag = true;
    if length(xd) == 2
       xd = repmat(xd',length(x),1);
    else
       [~, xd] = even_sample(td,xd,RATE,opts.interp_type); 
    end

if(opts.vid.MAKE_MOVIE)
    M = moviein(length(t)) ;

    vidObj = VideoWriter(strcat(opts.vid.filename,'.avi'),'Motion JPEG AVI');
    vidObj.FrameRate = opts.vid.FrameRate;
    vidObj.Quality = opts.vid.Quality;
    open(vidObj);frameRate = vidObj.FrameRate;
    % nFrame = floor(frameRate*t(end));
    frameDelay = 1/frameRate;
    time = 0;
end

hist = opts.hist ;
%% animate
    for i=1:length(t)
        % drawQuadrotor(axes1, x(i,:)');
        obj.draw_object(axes1,x(i,:)'); hold on;
        for io = 1:length(obj.obs)
           obs{i}.plot(); 
        end
        
%         plot3(x(max(1,i-hist):i, 1), x(max(1,i-hist):i, 2), x(max(1,i-hist):i, 3), 'k') ;
%         plot3(x(max(1,i-hist):i, 4), x(max(1,i-hist):i, 5), x(max(1,i-hist):i, 6), 'r') ;

%         plot3(x(max(1,i-hist):i, 1)-L*x(max(1,i-hist):i,7), x(max(1,i-hist):i, 2)-L*x(max(1,i-hist):i,8), x(max(1,i-hist):i, 3)-L*x(max(1,i-hist):i,9), 'r') ;
%         s = sprintf('Running\n t = %1.2fs \n 1/%d realtime speed',t(i), RATE/25);
%         text(x(i,1)-1.5,x(i,2)+1.5,s,'FontAngle','italic','FontWeight','bold');

        figure_x_limits_ = opts.figure.x.limits+x(i,1);
        figure_y_limits_ = opts.figure.y.limits+x(i,2);
        figure_z_limits_ = opts.figure.z.limits+x(i,3);
        set(axes1,'XLim',figure_x_limits_,'YLim',figure_y_limits_,'ZLim',figure_z_limits_);

        drawnow;
                
        if opts.vid.MAKE_MOVIE
            M(:,i) = getframe; 
            % Write data to video file
            writeVideo(vidObj,getframe(gcf));
            % time step system to next frame:
            time = time + frameDelay;
        end        
        
    end
    
%%
function [Et, Ex] = even_sample(t, x, Fs, type)
if nargin < 4, type = 'linear'; end

dt = diff(t);
dt = dt + (dt==0)*1e-5;
t = [0;cumsum(dt)];

% Obtain the process related parameters
N = size(x, 2);    % number of signals to be interpolated
M = size(t, 1);    % Number of samples provided
t0 = t(1,1);       % Initial time
tf = t(M,1);       % Final time
EM = (tf-t0)*Fs;   % Number of samples in the evenly sampled case with
                   % the specified sampling frequency
Et = linspace(t0, tf, round(EM))';
% Using linear interpolation (used to be cubic spline interpolation)
% and re-sample each signal to obtain the evenly sampled forms
    for s = 1:N
      Ex(:,s) = interp1(t(:,1), x(:,s), Et(:,1),type); 
    end
end    

end

