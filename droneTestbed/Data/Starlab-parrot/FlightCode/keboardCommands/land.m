if VSS_RunMode == 1
    
    udpHandle = udp('192.168.3.1',26061);
    fopen(udpHandle);
    
    %% land
    fwrite(udpHandle,uint8('l'));
    
    %%
    fclose(udpHandle);

else
    landCommand=true;
    takeoffCommand=false;
end