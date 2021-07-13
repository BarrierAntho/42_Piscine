#!/bin/bash
clear && echo "Terminal cleared"

echo "Program \"$0\":"
echo "Tips : if execution of program with one argument = Compile with flag -Wall -Werror -Wextra"
echo "e.g :"
echo "./compile.sh flag	==> gcc -Wall -Werror -Wextra file.c"
echo "./compile.sh 		==> gcc file.c"
echo ""

echo "------------------"
echo "Check forbidden function..."
grep -R -n -i -E 'include|stdio.h|stdib.h|string.h|printf|main' ex*/*.c
echo ""

echo "------------------"
echo "Check exec (a.out)..."
find ex* -type f -name "a.out" -print -delete
echo ""

echo "------------------"
echo "Check swp..."
find ex* -type f -name "*.swp" -print
echo ""

echo "------------------"
echo "Execution of norminette..."
norminette -R CheckForbiddenSourceHeader ex*
echo ""

echo "------------------"
echo "List of file to be compiled together :"
find . -type f -name "*.c"
echo ""

echo "------------------"
echo "Compilation with argument : $1"
if [ -z "$1" ]
then
	gcc $(find . -type f -name "*.c" | tr '\n' ' ') && ./a.out | cat -e
else
	gcc -Wall -Werror -Wextra $(find . -type f -name "*.c" | tr '\n' ' ') && ./a.out | cat -e
fi
echo ""
