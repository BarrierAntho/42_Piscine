#!/bin/bash
clear && echo "Terminal cleared"

echo "Program \"$0\":"
echo "Tips : if execution of program with one argument = Compile with flag -Wall -Werror -Wextra"
echo "e.g :"
echo "./compile.sh flag	==> gcc -Wall -Werror -Wextra file.c"
echo "./compile.sh 		==> gcc file.c"
echo "------------------"
echo "Check forbidden function..."
cat ex*/* | grep "stdio.h|stdib.h|string.h|printf" || echo "No forbidden function"
echo "------------------"
echo "Execution of norminette..."
norminette -R CheckForbiddenSourceHeader ex*
echo "------------------"

echo "List of file to be compiled together :"
find . -type f -name "*.c"

if [ -z "$1" ]
then
	gcc $(find . -type f -name "*.c" | tr '\n' ' ') && ./a.out | cat -e
else
	gcc -Wall -Werror -Wextra $(find . -type f -name "*.c" | tr '\n' ' ') && ./a.out | cat -e
fi
