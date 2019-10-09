%% default value definition
% default reference positions
x_target = 0; 
y_target = 0;
z_target = -1;

runs = 2; % number of simulations to run
minZ = -landingAltitude * 1.1;
maxZ = 2;
refPos = getRandPos(runs, minZ, maxZ); % generate random reference positions
%% collect data
for i = 1 : runs
    x_target = refPos(i, 1);
    y_target = refPos(i, 2);
    z_target = refPos(i,3);
    sim("asbQuadcopter");
    [inputs, labels] = retrieveData(cmd, estim, motor);
    fileName = ['Collected Data/Dataset_',num2str(i)];
    saveData(inputs, labels, fileName);
    disp(['Finished: ', num2str(i)]);
end
% 
% [importedInputs, importedLabels] = importDataset('Collected Data/Dataset_1');
% for i = 2 : runs
%     fileName = ['Collected Data/Dataset_',num2str(i)];
%     [inputs, labels] = importDataset(fileName);
%     importedInputs = [importedInputs; inputs];
%     importedLabels = [importedLabels; labels];
% end