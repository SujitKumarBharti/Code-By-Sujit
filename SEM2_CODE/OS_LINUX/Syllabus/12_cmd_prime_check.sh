#!/bin/bash
num=${1:-17}                                 # Set variable value
if [ "$num" -le 1 ]; then                    # Check condition
    echo "$num is not prime"                 # Print output message
    exit 0                                   # Exit script with status code
fi
is_prime=1                                   # Set variable value
for ((i=2; i*i<=num; i++)); do               # Iterate through loop
    if [ $((num % i)) -eq 0 ]; then          # Check condition
        is_prime=0                           # Set variable value
        break
    fi
done
if [ $is_prime -eq 1 ]; then                 # Check condition
    echo "$num is prime"                     # Print output message
else
    echo "$num is not prime"                 # Print output message
fi
