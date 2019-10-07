function dataset = retrieveData(CommandBus, stateBB, motorCmds)
%     CommandBus: The CommandBus signals input to the controller
%     stateBB: The stateBB signals input to the controller
%     motorCmds: The motorCmds signals output by the controller
    
    %% retrieve the command signals
    % select time steps when the take_off signal is true(0)
    rows = CommandBus.signals.values(:,5) == 0; 
    values = CommandBus.signals.values(rows,:);

    % select the position reference(2,3,4) and the orientation reference(6,7,8)
    columns = [2,3,4,6,7,8];
    values = values(:,columns);

    dataset = values; % dataset contains the training sample

    %% retrieve the states signals
    dataset = [dataset, stateBB.signals.values(rows,:)];

    %% retrieve the motor outputs
    dataset = [dataset, motorCmds.signals.values(rows,:)];
end