#!/bin/bash

add_contact() {
    read -p "Enter Name: " name
    read -p "Enter Number: " number
    echo "$name: $number" >> contacts.txt
    echo "Contact added!"
}

search_contact() {
    read -p "Enter name to search: " name
    grep -i "$name" contacts.txt || echo "No contact found."
}

show_all() {
    if [ -s contacts.txt ]; then
        cat contacts.txt
    else
        echo "Phonebook is empty."
    fi
}

while true
do
    echo -e "\n1. Add Contact\n2. Search Contact\n3. Show All\n4. Quit"
    read -p "Choose an option: " choice

    case $choice in
        1) add_contact ;;
        2) search_contact ;;
        3) show_all ;;
        4) break ;;
        *) echo "Invalid option!" ;;
    esac
done
