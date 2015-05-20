#!/bin/bash
doc1="result"
mkdir -p $doc1
ls |grep ".c$" | while read line
do
	 ccomp -dparse $line
done
ls | grep ".parsed.c$" | while read file1
do
	mv $file1 $doc1
done
ls | grep ".o$" | while read line
do
	rm $line
donecd
