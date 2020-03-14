function [dx] = afh_dynamics(data, x, u)
    % using 'q' and 'dq' for link states
    e3 = [0; 0; 1];
    
    
    % unpacking states
    % -------------------
    % [~, q, v0, dq, R, Om] = obj.unzipState(x);
    ns = 3+data.n*3;
    nr = data.nQ*9;
    s = x(1:ns);
    ds = x(ns+1:2*ns);
    x0 = s(1:3);
    q = reshape(s(4:end),3,data.n);
    v0 = ds(1:3);
    dq = reshape(ds(4:end),3,data.n);
    r = x(2*ns+1:2*ns+nr);
    R = reshape(r,3,3,data.nQ);
    Om = reshape(x(2*ns+nr+1:end),3,data.nQ);

    % extracting inputs
    % -------------------
    % [f, moments] = data.unzipInputs(u);
    Uarray = reshape(u,4,data.nQ); 
    f = Uarray(1,:);
    moments = Uarray(2:4,:);

    % compute net translation forces
    % -------------------
    uk = zeros(3,data.nvert);
    j = 1;
    for i = 1:data.nvert
       uk(:,i) = data.mge3(:,i);
       if data.I(i)
           uk(:,i) = uk(:,i)+f(j)*R(:,:,j)*e3;
           j=j+1;
       end
    end

    U = sum(uk,2);
    M1 = []; M2 = zeros(3*data.n,3*data.n);
    for i = 1:data.n
        U = [U; data.M(3*(i+1)-2:3*(i+1),3*(i+1)-2:3*(i+1))*norm(dq(:,i))^2*q(:,i)+ (data.l(i)*hat(q(:,i))^2*sum(uk(:,i+1:end),2)) ];
%             U = [U; (obj.l(i)^2*sum(obj.mbar(i:end))*norm(dq(:,i))^2*q(:,i))+(obj.l(i)*hat(q(:,i))^2*sum(uk(:,i:end),2))];
        M1 = [M1; hat(q(:,i))^2*data.M(3*(i+1)-2:3*(i+1),1:3)];
        for j = 1:data.n
            if i == j
                M2(3*i-2:3*i,3*j-2:3*j) = -data.M(3*(i+1)-2:3*(i+1),3*(j+1)-2:3*(j+1));
            else
                M2(3*i-2:3*i,3*j-2:3*j) = hat(q(:,i))^2*data.M(3*(i+1)-2:3*(i+1),3*(j+1)-2:3*(j+1));
            end
        end        
    end

    Mmat = [data.Mtop; [M1, M2]];

    % ddtrans = [dv0, d2q]
    % Mmat*[ddtrans] = U
    % -------------------
    ddtrans = (Mmat)\U;

    % rotational dynamics
    % -------------------
    dR = zeros(size(R));
    dOm = zeros(size(Om));
    for i = 1:data.nQ
       dR(:,:,i) = R(:,:,i)*hat(Om(:,i));
       dOm(:,i) = data.Jinv(:,:,i)*(moments(:,i)-cross(Om(:,i), data.J(:,:,i)*Om(:,i)));
    end


    % packing the state
    % -----------------
    dx = [v0; dq(:); ddtrans; dR(:); dOm(:)];        
end
