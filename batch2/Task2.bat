@echo off

set /a k=0
set /a l=0

:check
set /a l+=1

call :simple %l%
if "%true%" == "yes" (
   <nul set /p k= %l% 
   set /a k+=1
)

if not %k% == %1 (
   goto :check
)

exit /b 0


:simple 

set /a s=1
set /a i=%1
set /a i-=1
set /a j=%1


:pro
set /a s+=1
set /a r=%1%%%s%
if %r% == 0 (
    set true=no
    exit /b 0
)

if %s% LSS %i% (goto :pro)

set /a s+=1
set true=yes
  
exit /b 0
