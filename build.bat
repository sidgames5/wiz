@echo off

if %1==wizpm (
	fsutil file createnew compilertemp1.hxml 0
	echo --class-path>compilertemp1.hxml
	echo --main WizPM>compilertemp1.hxml
	echo --cpp bin/lib>compilertemp1.hxml
	haxe compilertemp1.hxml
	del compilertemp1.hxml
)

echo Compiler finished
pause>nul
