function generateRandomInput()
    rng("shuffle");
    %rng("default"); %produces the same data bewteen sessions

    zeroArr = zeros(100,3);
    scale = [0.20 0.20 0.5];% matrix of scalars, x y z respectively
    randArray = zeroArr + randn(100,3);
    offset = [0 0 -1];
    commandArr = (scale .* randArray) + offset;
end
