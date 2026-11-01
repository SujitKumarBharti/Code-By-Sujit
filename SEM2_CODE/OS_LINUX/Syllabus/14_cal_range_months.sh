#!/bin/bash
year=${1:-2026}                              # Set variable value
for m in 1 2 3; do                           # Iterate through loop
    echo "--- Month $m ---"                  # Print output message
    cal "$m" "$year"
done
