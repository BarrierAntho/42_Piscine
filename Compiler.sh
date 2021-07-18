#!/bin/bash

while getopts g:w: flag
do
	case "${flag}" in
		g) gccflag=${OPTARG};;
		w) wordfile=${OPTARG};;
	esac
done

clear && echo "Terminal cleared"
echo "gccflag: $gccflag";
echo "wordfile: $wordfile";

echo "Program \"$0\":"
echo "Tips :"
echo "-g anyvalue	==> compilation with full flag of gcc \"-Wall -Werror -Wextra \""
echo "-w file		==> compilation with word file (useful for strjoin or strsplit)"
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
echo "Compilation with argument : $@"
if [ -z "$gccflag" ]
then
	if [ -z "$wordfile" ]
	then
		gcc $(find . -type f -name "*.c" | tr '\n' ' ') && time ./a.out | cat -e
	else
		echo "Compilation with word file"
		gcc $(find . -type f -name "*.c" | tr '\n' ' ') && time ./a.out $(cat $wordfile | tr '\n' ' ') | cat -e
	fi
else
	if [ -z "$wordfile" ]
	then
		gcc -Wall -Werror -Wextra $(find . -type f -name "*.c" | tr '\n' ' ') && time ./a.out | cat -e
	else
	echo "Compilation with word file"
		gcc -Wall -Werror -Wextra $(find . -type f -name "*.c" | tr '\n' ' ') && time ./a.out $(cat $wordfile | tr '\n' ' ') || cat -e
	fi
fi
echo ""
