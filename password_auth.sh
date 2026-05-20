#!/bin/bash
# Simple Authentication

echo -n "Enter password: "
read -s pass

if [ "$pass" = "cse3204" ]; then
    echo -e "
Access Granted! Welcome Rayhan."
else
    echo -e "
Access Denied!"
fi
