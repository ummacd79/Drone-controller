function [inputs, labels] = importDataset(fileName)
    inputs = load([fileName,'_inputs.txt']);
    labels = load([fileName,'_labels.txt']);
end