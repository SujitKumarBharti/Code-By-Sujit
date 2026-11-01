#!/bin/bash


echo "=== System & Environment Details ==="
echo "Operating System : $(uname -s)"
echo "Kernel Release   : $(uname -r)"
echo "Architecture     : $(uname -m)"
echo "Host Name        : $(hostname)"
echo "Logged-in User   : $(whoami)"
echo "System Uptime    : $(uptime -p 2>/dev/null || uptime)"
