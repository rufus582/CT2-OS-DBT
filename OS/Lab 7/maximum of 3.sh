#!/bin/bash

echo "Enter 1st number"
read a
echo "Enter 2nd number"
read b
echo "Enter 3rd number"
read c

if [ $a -gt $b ] && [ $a -gt $c ]; then
	echo "$a is greater"
elif [ $b -gt $a ] && [ $b -gt $c ]; then
	echo "$b is greater"
else
	echo "$c is greater"
fi