#!/bin/bash
base=${1:-2}                                 # Set variable value
exp=${2:-5}                                  # Set variable value
res=1                                        # Set variable value
for ((i=1; i<=exp; i++)); do                 # Iterate through loop
    res=$((res * base))                      # Set variable value
done
echo "$base ^ $exp = $res"                   # Print output message
