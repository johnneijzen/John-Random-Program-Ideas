@ECHO OFF
ECHO "Enter Drive letter. ONLY The Letter"
set /p letter=
attrib -s -h -a /s /d %letter%:*.*
echo "Done"
