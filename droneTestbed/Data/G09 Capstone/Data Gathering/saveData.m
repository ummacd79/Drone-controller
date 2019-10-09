function saveData(inputs, labels, fileName)
    writematrix(inputs, [fileName,'_inputs.txt']);
    writematrix(labels, [fileName,'_labels.txt']);
end