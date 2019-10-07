%% Add folders to your path
% choose the method, and run the script. 
method='certainFolders';
% edit include/exclude list if chose 'everything_exclude' or 'certainFolders'

% runs the function:
addpatherF(method);

clear method;

% function itself:
function addpatherF(method)

switch method
    
        %% To include everything
    case 'everything'
        
        addpath(pwd);   % add root folder
        
        % add subfolders
        folders=dirFolder(pwd);
        for i=1:length(folders)
            addpath(genpath(folders{i}))
        end
        
        %% To include everything exclude some folders
    case 'everything_exclude'
        
        % folders to be excluded
        excludedFolders={'m','not','profile','Toolbox','coder'};
        
        addpath(pwd);   % add root folder
        
        folders=dirFolder(pwd); % all folders
        
        % folders to be included
        includedFolders=folders(~ismember(folders,excludedFolders));
        
        for  i=1:length(includedFolders)
            addpath(genpath(includedFolders{i}))
        end
        
        
        %% To include certain folders
    case 'certainFolders'
        
        includedFolders={'Functions','Data'};
        
        addpath(pwd); % add root folder
        
        for  i=1:length(includedFolders)
            addpath(genpath(includedFolders{i}))
        end
        
        %% To include everything under a folder with GUI
    case 'GUI_everything'
        rootDir = uigetdir(pwd, 'Select a folder');
        
        % add subfolders
        folders=dirFolder(rootDir);
        for i=1:length(folders)
            addpath(genpath(folders{i}))
        end
        
        %% To include certain folders with GUI
    case 'GUI_certain'
        % press cancel if you are finished with adding
        
        rootDir=1;
        
        while 1 % continue until user press cancel         
            rootDir = uigetdir(pwd, 'Select a folder');
            if rootDir==0
                break;
            else
                addpath(genpath(rootDir));             
            end
        end
end


disp('path is updated');
end

%% get folder names in a directory
function [folders] = dirFolder(parentDir)
% modified from https://www.mathworks.com/matlabcentral/answers/166629-is-there-any-way-to-list-all-folders-only-in-the-level-directly-below-a-selected-directory#comment_624696

all    = dir(parentDir); %list of all files and folders
names    = {all.name};
% seperating folders indeces
idxFolder = [all.isdir] & ~strcmp(names, '.') & ~strcmp(names, '..');

% Extract only those that are directories.
folders = names(idxFolder);
end
