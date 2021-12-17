@echo off

if not exist %1 ( 
    echo No file like this
    exit /b 1 
)

for /F "usebackq eol=# tokens=1,2" %%i in (%1) do (
     echo %%j %%i>>%2
)

exit /b 0
