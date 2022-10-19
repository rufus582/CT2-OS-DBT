#!/bin/bash

for file in *
do
	if [ -r $file -a -w $file -a -x $file ]; then
		ls -l $file
	fi

done