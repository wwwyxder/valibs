#!/bin/bash
cat "$1"|grep -v '^@'|awk '$4!=0'|cut -f 1|LC_ALL=C sort|uniq >tmp1
cat "$2"|grep -v '^@'|awk '$4!=0'|cut -f 1|LC_ALL=C sort|uniq >tmp2
wc -l tmp1 tmp2
awk 'BEGIN {cnt=0} FNR==NR{hashcode[$0]=1;} FNR!=NR{if(hashcode[$0]==1) ++cnt} END {print cnt;}' tmp1 tmp2
