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

if [ -z "$gccflag" ]
then
	gcc_flag=""
else
	gcc_flag="-Wall -Werror -Wextra"
fi

if [ -z "$wordfile" ]
then
	word_file=""
else
	word_file=$(cat $wordfile | tr '\n' ' ')
fi

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
gcc $gcc_flag $(find . -type f -name "*.c" | tr '\n' ' ') && time ./a.out $word_file | cat -e
echo ""
