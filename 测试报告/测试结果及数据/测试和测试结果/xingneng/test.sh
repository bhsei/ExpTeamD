#!/bin/bash
ls | grep ".c$" | while read line
do
	name=`echo $line | awk -F '.' '{print $1}'`
	gcc $line -o -lm $name".gcc1"
	gcc $line -O1 -lm -o $name".gcc2"
	ccomp $line -o -lm $name".ccomp"
	echo "$line gcc -o :" >> temp1
	./$name".gcc1" >> temp2
	echo "$line gcc -o2 :" >> temp1
	./$name".gcc2" >> temp1
	echo "$line ccomp -o : " >> temp1
	./$name".ccomp" >> temp1
done
cat temp1 > reuslt.txt
rm -f temp1
