#!/bin/bash

echo "Enter a number"
read a

if [ `expr $a % 2` == 0 ]; then
	echo "EVEN"
else
	echo "ODD"
fi