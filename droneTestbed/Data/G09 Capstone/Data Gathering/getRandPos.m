function randPos = getRandPos(runs, minZ, maxZ)
    % generate the random x, y, z reference positions, each row is used for
    % one simulation run
    randPos = 2*rand(runs, 2)-1; % x and y are in the range -1 to 1;
    randPos = [randPos,(maxZ - minZ) * rand(runs, 1) + minZ]; % z range
    randPos = -randPos;
end
