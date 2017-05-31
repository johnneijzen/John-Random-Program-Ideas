@ECHO OFF
ECHO "Enter Drive letter. ONLY The Letter"
set /p letter=
ECHO %letter%: selected
attrib -s -h -a /s /d %letter%:*.*
