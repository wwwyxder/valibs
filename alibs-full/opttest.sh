#!/bin/bash
trim_bt2opt(){
    echo $1|sed "s/^bt2opt:://g"
}
trim_bwaopt(){
    echo $1|sed "s/^bwaopt:://g"
}
bt2opt=
bwaopt=
while [ "$#" -gt "0" ]
do    case $1 in
    bt2opt::*)
        bt2opt=$bt2opt" "$(trim_bt2opt "$1")" "
        shift
        ;;
    bwaopt::*)
        bwaopt=$bwaopt" "$(trim_bwaopt "$1")" "
        shift
        ;;
    *)
        shift
        ;;
    esac
done
echo "bt2opt:$bt2opt"
echo "bwaopt:$bwaopt"
