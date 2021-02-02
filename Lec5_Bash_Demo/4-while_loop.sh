#!/bin/bash
# AerE 361
# Bash Demo
# While Loop Demo
# Professor Nelson
valid=true
count=1
while [ $valid ]
do
echo $count
if [ $count -eq 5 ];
then
break
fi
((count++))
done
