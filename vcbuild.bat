@echo off
IF NOT EXIST %NodePath%\Release\node.exe GOTO NONODE
echo This process requires MS Visual Studio 2010. Make sure you either start this command from the 'Visual Studio Command Line' or have your environment variables set up. Hit Enter to start the build process.
pause
%NodePath%\Release\node.exe tools/gluegen.js
msbuild o3nodeVS2010.sln
goto END
:NONODE
echo Node was not found on your system. In order to build extensions you have to get the sources from nodejs.org and compile node yourself. After that, please set the evironment variable 'NodePath' to the node root directory
goto END
:END
pause