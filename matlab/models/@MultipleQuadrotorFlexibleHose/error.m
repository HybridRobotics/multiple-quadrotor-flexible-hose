function [e, exnorm, evnorm, eq, edq, Psiq, eR, eOm, PsiR] = error(obj,x,xd)
%%
% errx[1,1] = norm(x0-x0d) 
% errv[1,1] = norm(v0-v0d) 
%
% Psiq[1,n] = 
%
% PsiR[1,nQ] = 
%

%%
% current state
[x0, q, v0, dq, R, Om] = obj.unzipState(x);
% get desired stated
[x0d, qd, v0d, dqd, Rd, Omd] = obj.unzipState(xd);

errx = (x0-x0d);
errv = (v0-v0d);

exnorm = norm(errx); evnorm = norm(errv);

om = zeros(3,obj.n);
omd = zeros(3,obj.n);
eq = zeros(3, obj.n);
edq = zeros(3, obj.n);
Psiq = zeros(1, obj.n);
for i = 1:obj.n
    om(:,i) = cross2(q(:,i),dq(:,i));
    omd(:,i) = cross2(q(:,i),dqd(:,i));
%     eq(:,i)  =  hat(q(:,i))^2*qd(:,i);
%     edq(:,i) = dq(:,i) - hat(hat(qd(:,i))*dqd(:,i))*q(:,i);
    eq(:,i) = cross2(qd(:,i),q(:,i));
    edq(:,i) = om(:,i)+vec_cross(q(:,i),vec_cross(q(:,i) ,omd(:,i) ));
        
    Psiq(:,i)  = (1-dot(qd(:,i),q(:,i)));
end

eR = zeros(3, obj.nQ);
eOm = zeros(3, obj.nQ);
PsiR = zeros(1, obj.nQ);
for i = 1:obj.nQ
    eR(:,i)  = 0.5*vee(Rd(:,:,i)'*R(:,:,i)-R(:,:,i)'*Rd(:,:,i)); 
    eOm(:,i) = Om(:,i) - R(:,:,i)'*Rd(:,:,i)*Omd(:,i);
    PsiR(:,i)  = 0.5*trace(eye(3)-Rd(:,:,i)'*R(:,:,i));
end

e = [errx; vec(eq); errv; vec(edq); vec(eR); vec(eOm)];

end