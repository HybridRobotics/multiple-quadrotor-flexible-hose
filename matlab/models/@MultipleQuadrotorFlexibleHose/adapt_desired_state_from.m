function [ref] = adapt_desired_state_from(obj, mdlorig, t)

reforig = mdlorig.get_desired_states(t);
r = mdlorig.n/obj.n;

pos = [0.0, 0.8*2;
        0, 0;
        1.0, 1.0];
x = computeSetpoint(obj, pos);

end