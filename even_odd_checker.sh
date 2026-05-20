#!/bin/bash
# Even Odd Checker

echo "Enter a number: "
read num

if [ $((num % 2)) -eq 0 ]; then
    echo "$num is Even number"
else
    echo "$num is Odd number"
fi
