#!/bin/bash
ls | grep ".c$" | while read line
do
	name=`echo $line | awk -F '.' '{print $1}'`
	gcc $line -o $name".gcc1"
	gcc $line -O1 -o $name".gcc2"
	ccomp $line -o $name".ccomp"
	echo"gcc -o :" > temp1
	./$name".gcc1" >> temp2
	echo"gcc -o2 :" >> temp1
	./$name".gcc2" >> temp1
	echo"ccomp -o : : " >> temp1
	./$name".ccomp" >> temp1
done
cat temp1 > reuslt.txt
rm -f temp
