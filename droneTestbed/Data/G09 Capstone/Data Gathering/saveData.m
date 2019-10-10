function saveData(inputs, labels, fileName)
    writematrix(inputs, [fileName,'_inputs.txt']); % save the inputs
    writematrix(labels, [fileName,'_labels.txt']); % save the labels
end