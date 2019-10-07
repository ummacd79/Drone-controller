try
    echoudp('off')
    
catch exp
    
    GUI.TextArea.Value=exp.message;
end