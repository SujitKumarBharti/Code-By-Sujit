#!/bin/bash
num=${1:-12345}                              # Set variable value
sum=0                                        # Set variable value
n=$num                                       # Set variable value
while [ "$n" -gt 0 ]; do                     # Iterate through loop
    rem=$((n % 10))                          # Set variable value
    sum=$((sum + rem))                       # Set variable value
    n=$((n / 10))                            # Set variable value
done
echo "Sum of digits of $num is $sum"         # Print output message
