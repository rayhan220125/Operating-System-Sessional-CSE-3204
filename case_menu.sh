#!/bin/bash
# Menu using Case

echo "1. Show Date"
echo "2. Show Current User"
echo "3. Show Directory"
echo "4. Exit"

read choice

case $choice in
    1) date ;;
    2) whoami ;;
    3) pwd ;;
    4) echo "Goodbye!"; exit 0 ;;
    *) echo "Invalid option!" ;;
esac
