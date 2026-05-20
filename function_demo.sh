#!/bin/bash
# Function Demo

greet() {
    echo "Hello $1! Welcome to Shell Lab."
}

add() {
    echo "Sum = $(( $1 + $2 ))"
}

greet "Md. Abu Rayhan"
add 25 75
