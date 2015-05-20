#!/bin/bash
ls | grep ".gcc1$" | while read line
do
	name=`echo $line | awk -F '.' '{print $1}'`
	echo "$name gcc -o :"  >> temp1
	./$name".gcc1" >> temp2
	echo "$name gcc -o2 :" >> temp1
	./$name".gcc2" >> temp1
	echo "$name ccomp -o : " >> temp1
	./$name".ccomp" >> temp1
done
cat temp1 > result.txt
rm -f temp1
