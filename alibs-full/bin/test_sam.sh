#!/bin/bash
if [ "$#" -ne "2" ]
then
    echo "Usage:test_sam <std_sam> <out.sam>"
    exit 1
fi
cat $1 |tail -n $((`cat $1 |wc -l`-`cat $1 |head -n 200|grep "^@"|wc -l`))|LC_ALL=C sort >std_no_header.tmp
cat $2 |tail -n $((`cat $2 |wc -l`-`cat $2 |head -n 200|grep "^@"|wc -l`))|LC_ALL=C sort >out_no_header.tmp
LC_ALL=C join std_no_header.tmp out_no_header.tmp -o 1.4,2.4 >cmp.tmp
echo -n "right mapping:"
r=`cat cmp.tmp|grep "^\([[:digit:]]*\)[[:blank:]]\1$"|wc -l`
echo $r
echo -n "no mapping:"
cat cmp.tmp|grep -v "^\([[:digit:]]*\)[[:blank:]]\1$"|grep "[[:blank:]]0$"|wc -l
echo -n "wrong mapping:"
w=`cat cmp.tmp|grep -v "^\([[:digit:]]*\)[[:blank:]]\1$"|grep -v "[[:blank:]]0$"|wc -l`
echo $w
echo -n "prescision:"
p=`echo "scale=4;$r/($r+$w)"|bc`
echo $p
echo -n "recall:"
recall=`echo "scale=4;$r/10000"|bc`
echo $recall
F1=`echo "scale=4;2*$p*$recall/($p+$recall)"|bc`
echo "F-measure F1:$F1"
rm std_no_header.tmp
rm out_no_header.tmp
rm cmp.tmp
exit 0
