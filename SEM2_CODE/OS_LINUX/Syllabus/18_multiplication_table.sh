#!/bin/bash
num=${1:-5}                                  # Set variable value
echo "Multiplication Table for $num:"        # Print output message
for i in {1..10}; do                         # Iterate through loop
    echo "$num x $i = $((num * i))"          # Print output message
done
