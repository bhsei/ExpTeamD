#!/bin/bash
ls | grep ".c$" | while read line
do
	name=`echo $line | awk -F '.' '{print $1}'`
	ccomp $line -o $name".ccomp" -lm 
	echo "$line ccomp -o : " >> temp1
	./$name".ccomp" >> temp1
done
cat temp1 > reuslt.txt
rm -f temp1
