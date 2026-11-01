#!/bin/bash
n=${1:-5}                                    # Set variable value
fact=1                                       # Set variable value
for ((i=1; i<=n; i++)); do                   # Iterate through loop
    fact=$((fact * i))                       # Set variable value
done
echo "Factorial of $n is $fact"              # Print output message
