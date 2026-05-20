#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Usage: $0 <filename>"
    exit 1
fi

file=$1

while true
do
    if [ -f "$file" ]; then
        echo "File is safe"
    else
        timestamp=$(date "+%Y-%m-%d %H:%M:%S")
        error_msg="[$timestamp] Error: File '$file' not found!"
       
        echo "$error_msg" >&2
        echo "$error_msg" >> error.log
    fi
    sleep 5
done
