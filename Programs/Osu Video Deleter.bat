@echo off
set /p pathName=Enter Path to Folder where you want delete video from?
cd /d %pathName%
set /p check=is this correct path to your osu song folder: %pathName%?
IF %check%==y (
	echo okey press any key to start program
	pause
	del /s *.avi
	del /s *.flv
	del /s *.wmv
) ELSE (
	echo Restart program
	pause
)
echo Thank You Using John Osu Video Deleter Program press any key to quit
pause
