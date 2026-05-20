#!/bin/bash
# Advanced Interactive Menu

while true; do
    echo "==================="
    echo "   Shell Menu"
    echo "==================="
    echo "1. Date & Time"
    echo "2. Calculator"
    echo "3. System Info"
    echo "4. Exit"
    read -p "Choose option: " opt

    case $opt in
        1) date ;;
        2) bash calculator.sh ;;
        3) bash system_info.sh ;;
        4) echo "Thank you!"; exit 0 ;;
        *) echo "Invalid choice!" ;;
    esac
done
