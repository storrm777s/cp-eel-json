@echo off
for /f %%a in ('echo prompt $E^| cmd') do set "ESC=%%a"
echo Compiler: ^>^>Compiling...
g++ -Iinclude -Wall src\*.cpp *.cpp -o main.exe
set end=%time%
if %errorlevel% neq 0 (
    echo Compiler: %ESC%[31m^>^>Compilation failed
) else (

    echo Compiler: %ESC%[92mBuild successful.%ESC%[0m
    echo.
    echo Compiler: ^>^>Running main.exe...
    echo Compiler: --------------------
    main.exe
)
echo Compiler: %ESC%[92mFinished running.%ESC%[0m [PRESS ANY KEY TO EXIT]
pause >nul
