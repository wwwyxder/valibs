#!/bin/bash
sed 's/\t\t/\n/g'|tr '\t' ' '|shortter|grep -v '^$'
