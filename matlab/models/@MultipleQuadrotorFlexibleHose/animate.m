function animate(obj,opts_in)
% function to animate dynamics
% data
% opts_default.RATE = 25;
% opts_default.t = [];
% opts_default.x = [];
% opts_default.xd = [0;0];
% opts_default.td = [];
% opts_default.interp_type = 'spline';
% 
% % video
% opts_default.vid.MAKE_MOVIE = 0;
% opts_default.vid.filename = 'vid1';
% opts_default.vid.Quality = 100;
% opts_default.vid.FrameRate = 24;
% 
% % objects
% opts_default.figure.x.limits = [-2 2];
% opts_default.figure.y.limits = [-2 2];
% opts_default.figure.z.limits = [-2 2];
% opts_default.figure.scale = 1.5;
% opts_default.hist = 100;
% opts_default.grid = 'on';
% 
% % plots
% opts_default.plot2D.N = 1;
% opts_default.plot3D.N = 1;
% opts_default.obj.N = 1; 
% 
% opts_default.frame.move = false;
% opts_default.frame.view = {40,25};


%% default options
% data
opts_default.RATE = 25;
opts_default.t = [];
opts_default.x = [];
opts_default.xd = [0;0];
opts_default.td = [];
opts_default.interp_type = 'spline';

% video
opts_default.vid.MAKE_MOVIE = 0;
opts_default.vid.filename = 'vid1';
opts_default.vid.Quality = 100;
opts_default.vid.FrameRate = 24;
opts_default.vid.format = 'Motion JPEG AVI';

% objects
opts_default.figure.x.limits = [-2 2];
opts_default.figure.y.limits = [-2 2];
opts_default.figure.z.limits = [-2 2];
opts_default.figure.scale = 1.5;
opts_default.hist = 100;
opts_default.grid = 'on';

% plots
opts_default.plot_traj = true;

opts_default.plot2D.N = 1;
opts_default.plot3D.N = 1;
opts_default.obj.N = 1; 

opts_default.frame.move = false;
opts_default.frame.view = {40,25};

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
%     set(fig_handle,'MenuBar', 'none');
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
    td = t;
    xd = opts.xd;
    box on;
    
    [t, x] = even_sample(t, x, RATE,opts.interp_type);
    t = t+t(1);    
    [~, xd] = even_sample(td,xd,RATE,opts.interp_type); 


if(opts.vid.MAKE_MOVIE)
    M = moviein(length(t)) ;
    if ~exist('results', 'dir')
       mkdir('results')
    end

    vidObj = VideoWriter(strcat(opts.vid.filename,'.avi'),opts.vid.format);
    vidObj.FrameRate = opts.vid.FrameRate;
%     vidObj.Quality = opts.vid.Quality;
    open(vidObj);frameRate = vidObj.FrameRate;
    % nFrame = floor(frameRate*t(end));
    frameDelay = 1/frameRate;
    time = 0;
end

hist = opts.hist ;
xid = obj.computeVertices(xd(end,:)');

%% animate
    for i=1:length(t)
        % drawQuadrotor(axes1, x(i,:)');
        obj.draw_object(axes1,x(i,:)'); hold on;
        if opts.plot_traj
            plot3(x(max(1,i-hist):i,1), x(max(1,i-hist):i,2), x(max(1,i-hist):i,3), 'r', 'linewidth', 1);
            plot3(xd(max(1,i-hist):i,1), xd(max(1,i-hist):i,2), xd(max(1,i-hist):i,3), 'b', 'linewidth', 1.5);
        end
        for j = obj.setI
            scatter3(xid(1,j), xid(2,j), xid(3,j),...
                80,'h', 'MarkerEdgeColor',[0 0 0],...
                      'MarkerFaceColor',[.10 1.0 .0],...
                      'LineWidth',0.5);
        end
        
        axis equal
        xlimits = opts.figure.x.limits+x(i,1)*opts.frame.move;
        ylimits = opts.figure.y.limits+x(i,2)*opts.frame.move;
        zlimits = opts.figure.z.limits+(x(i,3)-1)*opts.frame.move;
        set(axes1,'XLim',xlimits,'YLim',ylimits, 'ZLim', zlimits);
%         axis equal
%         grid on;
%         view(0,0); 
        string = sprintf('Simulation time = %1.2fs',t(i));
        txt_x = x(i,1)*opts.frame.move+.5;
        txt_y = x(i,2)*opts.frame.move+0.5;
        txt_z = zlimits(2)+0.5;
        txt_handle = text(txt_x, txt_y, txt_z, string,'FontAngle','italic','FontWeight','bold');
        set(txt_handle,'Interpreter','Latex', 'FontSize', 15); 

        grid(opts.grid);
        drawnow;
                
        if opts.vid.MAKE_MOVIE
            M(:,i) = getframe; 
            % Write data to video file
            writeVideo(vidObj,getframe(gcf));
            % time step system to next frame:
            time = time + frameDelay;
        end        
        
    end
    
% %%
% function [Et, Ex] = even_sample(t, x, Fs, type)
% if nargin < 4, type = 'linear'; end
% 
% dt = diff(t);
% dt = dt + (dt==0)*1e-5;
% t = [0;cumsum(dt)];
% 
% % Obtain the process related parameters
% N = size(x, 2);    % number of signals to be interpolated
% M = size(t, 1);    % Number of samples provided
% t0 = t(1,1);       % Initial time
% tf = t(M,1);       % Final time
% EM = (tf-t0)*Fs;   % Number of samples in the evenly sampled case with
%                    % the specified sampling frequency
% Et = linspace(t0, tf, round(EM))';
% % Using linear interpolation (used to be cubic spline interpolation)
% % and re-sample each signal to obtain the evenly sampled forms
%     for s = 1:N
%       Ex(:,s) = interp1(t(:,1), x(:,s), Et(:,1),type); 
%     end
% end    

end
