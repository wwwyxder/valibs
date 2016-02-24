#!/bin/bash
if [ $# -ne 2 ]
then
    echo 'Usage: cleanRef.sh <in.fa> <out.fa>';
else
    cat $1|sed 's/\r//g' > $2
fi
exit 0