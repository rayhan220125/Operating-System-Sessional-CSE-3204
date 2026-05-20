#!/bin/bash

target=$(( RANDOM % 20 + 1 ))
attempts=0
guess=0

echo "Guess a number between 1 and 20!"

while [ $guess -ne $target ]
do
    read -p "Enter your guess: " guess
    ((attempts++))

    if [ $guess -gt $target ]; then
        echo "Too high!"
    elif [ $guess -lt $target ]; then
        echo "Too low!"
    fi
done

echo "Success! The number was $target. Total attempts: $attempts"
