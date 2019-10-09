function [inputs, labels] = retrieveData(CommandBus, stateBB, motorCmds)
%     CommandBus: The CommandBus signals input to the controller
%     stateBB: The stateBB signals input to the controller
%     motorCmds: The motorCmds signals output by the controller
    
    %% retrieve the command signals
    % select time steps when the take_off signal at column 5 is true(0)
    rows = CommandBus.signals.values(:,5) == 0; 
    inputs = CommandBus.signals.values(rows,:);

    % select the position reference(2,3,4) and the orientation reference(6,7,8)
    columns = [2,3,4,6,7,8];
    inputs = inputs(:,columns);


    %% retrieve the states signals
    inputs = [inputs, stateBB.signals.values(rows,:)];

    %% retrieve the motor outputs
    labels = motorCmds.signals.values(rows,:);
end