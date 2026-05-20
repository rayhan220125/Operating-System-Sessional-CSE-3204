#!/bin/bash

read -p "Enter a number: " num

if [ $num -lt 0 ]; then
    echo "Error: Negative numbers are not allowed."
else
    fact=1
    for (( i=1; i<=num; i++ ))
    do
        fact=$((fact * i))
    done
    echo "Factorial of $num is: $fact"
fi
