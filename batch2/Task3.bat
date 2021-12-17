@echo off
setlocal enableextensions enabledelayedexpansion
 
call :Reverse "%~1"
 
echo %Reverse%
pause
endlocal
exit /b 0
 
:Reverse
    setlocal enableextensions enabledelayedexpansion
    set sOutName=%~0
    
    set sValue=%~1
    
    if defined sValue (
        call :Reverse "%sValue:~1%"
        set sResult=!Reverse!%sValue:~0,1%
    )
    
    endlocal & set %sOutName:~1%=%sResult%
    exit /b
