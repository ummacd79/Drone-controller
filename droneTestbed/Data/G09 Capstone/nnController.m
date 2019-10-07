for i = 1 = 1000:
    randomInpout;
    dataset = retrieveData(cmd, estim, motor);
    save dataset;
end


train