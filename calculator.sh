#!/bin/bash
# Simple Calculator

echo "Enter first number: "
read a
echo "Enter second number: "
read b
echo "Enter operator (+ - * /): "
read op

case $op in
    +) echo "Result: $((a + b))" ;;
    -) echo "Result: $((a - b))" ;;
    \*) echo "Result: $((a * b))" ;;
    /) 
        if [ $b -ne 0 ]; then
            echo "Result: $((a / b))"
        else
            echo "Error: Division by zero!"
        fi ;;
    *) echo "Invalid operator!" ;;
esac
