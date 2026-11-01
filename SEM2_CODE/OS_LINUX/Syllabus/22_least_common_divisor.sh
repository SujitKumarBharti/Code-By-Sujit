#!/bin/bash
a=${1:-12}                                                 # Set variable value
b=${2:-18}                                                 # Set variable value
lcd=0                                                      # Set variable value
min=$(( a < b ? a : b ))                                   # Set variable value
for ((i=2; i<=min; i++)); do                               # Iterate through loop
    if [ $((a % i)) -eq 0 ] && [ $((b % i)) -eq 0 ]; then  # Check condition
        lcd=$i                                             # Set variable value
        break
    fi
done
if [ $lcd -gt 0 ]; then                                    # Check condition
    echo "Least common divisor (>1) is: $lcd"              # Print output message
else
    echo "No common divisor greater than 1"                # Print output message
fi
