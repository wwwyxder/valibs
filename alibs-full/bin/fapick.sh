#!/bin/bash
if [ "$#" -ne "3" ]
then
    echo "Usage:pick <out_bt2.sam> <one_line_sorted.fa> <picked.tmp> "
    exit 1
fi

cat $1|cut -f 1,4,12- | grep -E '^[^[:blank:]]*[[:blank:]]0[[:blank:]]|XS' |cut -f 1|LC_ALL=C sort|sed 's/^/>&/g' |LC_ALL=C join -t $'\t' - $2|fa_from_online.sh >$3 
exit 0
