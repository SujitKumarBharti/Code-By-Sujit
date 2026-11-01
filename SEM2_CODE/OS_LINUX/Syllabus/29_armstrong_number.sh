#!/bin/bash
num=${1:-153}                                # Set variable value
sum=0                                        # Set variable value
temp=$num                                    # Set variable value
while [ "$temp" -gt 0 ]; do                  # Iterate through loop
    rem=$((temp % 10))                       # Set variable value
    sum=$((sum + rem * rem * rem))           # Set variable value
    temp=$((temp / 10))                      # Set variable value
done
if [ "$sum" -eq "$num" ]; then               # Check condition
    echo "$num is an Armstrong number"       # Print output message
else
    echo "$num is not an Armstrong number"   # Print output message
fi
