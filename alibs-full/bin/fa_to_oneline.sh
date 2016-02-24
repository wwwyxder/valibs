#!/bin/bash
tr -d '\r'|sed 's/^>.*$/&\t\t/g'|tr -d '\n'|sed 's/>/\n>/g'|tr ' ' '\t'|shortter|grep -v "^$"
