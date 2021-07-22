#!/bin/sh
cat /etc/passwd | grep -v "^#" | sed -n 'p;n' | awk -F : '{ print $1 }' | rev | sort -r | awk '/NR==8/, /iNR==15/'
