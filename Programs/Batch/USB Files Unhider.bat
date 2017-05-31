@ECHO OFF
ECHO "Enter Drive letter"
set /p letter=

attrib -s -h -a /s /d %letter%:*.*
