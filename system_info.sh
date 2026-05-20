#!/bin/bash
# System Information

echo "=== System Information ==="
echo "Hostname     : $(hostname)"
echo "OS Name      : $(uname -s)"
echo "Kernel       : $(uname -r)"
echo "Uptime       : $(uptime -p)"
echo "Logged in as : $(whoami)"
