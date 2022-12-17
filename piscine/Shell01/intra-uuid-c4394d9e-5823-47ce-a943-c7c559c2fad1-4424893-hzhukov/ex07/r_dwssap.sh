#!/bin/bash
awk -F: '{print $1}' /etc/passwd | sed 1d | sort -r | awk 'NR%2==0' | sed -n "$FT_LINE1 $FT_LINE2 p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./'
