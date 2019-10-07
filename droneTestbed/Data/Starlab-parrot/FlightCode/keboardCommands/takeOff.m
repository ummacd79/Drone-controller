if VSS_RunMode == 1
   
    udpHandle = udp('192.168.3.1',26061);
    fopen(udpHandle);
  
    %% start
    fwrite(udpHandle,uint8('s'));
    
    %%
    fclose(udpHandle);

else  
    takeoffCommand=true;
    landCommand=false;   
end