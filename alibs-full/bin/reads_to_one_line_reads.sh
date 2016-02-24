#!/bin/bash
OLDIFS=$IFS
IFS='\n'
while read line1
do
    read line2
    read line3
    read line4
    echo -n $line1
    printf "\t"
    echo -n $line2
    printf "\t"
    echo -n $line3
    printf "\t"
    echo $line4
done
IFS=$OLDIFS
