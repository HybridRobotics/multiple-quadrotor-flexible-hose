function [xInit] = get_init_cond(obj, varargin)
%
% default parameters
dflt_cond = 'close'; % single, flatness
dflt_dist = mean(obj.l);
dflt_t0 = 0;

meanl = mean(obj.l);
nlinks = diff(obj.setI);

%%
% parser
% ------
p = inputParser;
addOptional(p, 'condition', dflt_cond); 
addOptional(p, 'dist', dflt_dist); 
addOptional(p, 't0', dflt_t0); 
parse(p,varargin{:});

cond = p.Results.condition;
dist = p.Results.dist;
tInit  = p.Results.t0;

if strcmp(cond, 'close')
    x00 = zeros(3,1);
    v00 = zeros(3,1);
    
    nege3 = [0; 0; -1];
    q0 = [];
    for j = 1:length(nlinks)
       n_ = nlinks(j);
       q0_ = nege3;
       % deg = 180/(n_-1);
       deg = zeros(n_,1);
       deg(ceil(n_/2)) = 90;
       for k = ceil(n_/2)+1:n_
           deg(k) = 180;
       end
       for k = 2:n_
           q0_(:,k) = Ryd(-deg(k))*nege3;
       end
       q0 = [q0, q0_];       
    end

    dq0 = zeros(3, obj.n);
    R0 = repmat(eye(3),1,1, obj.nQ);
    Om0 = zeros(3, obj.nQ);

    xInit = obj.zipState(x00,q0, v00,dq0, R0,Om0);
    
elseif strcmp(cond, 'single')
    x00 = zeros(3,1);
    v00 = zeros(3,1);
    q0 = [0;0;-1];
    for i = 2:obj.n
        q0(:,i)=Rxd(3)*q0(:,i-1);
    end

    dq0 = zeros(3, obj.n);
    R0 = repmat(eye(3),1,1,obj.nQ);
    Om0 = zeros(3,obj.nQ);
    xInit = obj.zipState(x00,q0, v00,dq0, R0,Om0);

elseif strcmp(cond, 'flatness')
%     ref = obj.flat2state(obj.trajectory(0));
    ref = obj.get_desired_states(0);
    xInit = ref.xd;
elseif strcmp(cond, 'perturb-cable')
%     ref = obj.flat2state(obj.trajectory(0));
    ref = obj.get_desired_states(0);

    xInit = ref.xd;
    [x0, q, v0, dq, R, Om] = obj.unzipState(xInit);
    
    xp = zeros(3,1);
    q_ = zeros(3,obj.n);
    for j = 1:obj.n
        if j<0.5*obj.n
            c = 1;
        elseif j==ceil(0.5*obj.n)
            c= 0;
        else
            c = -1;
        end
        qpert = q(:,j)+c*[0;0.5;0];
        qpert = qpert./norm(qpert);
        q_(:,j) = qpert;
        xp = [xp, xp(:,j)+obj.l(j)*qpert];
    end
    xInit = obj.zipState(x0, q_, v0, dq, R, Om);
% figure;
% plot3(xp(1,:),xp(2,:),xp(3,:),'-o','linewidth',2);
% % axis equal; xlabel('x'); ylabel('y'); zlabel('z');
    
end
        


end