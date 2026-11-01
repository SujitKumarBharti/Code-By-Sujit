#!/bin/bash
file=${1:-$0}                                                # Set variable value
if [ -r "$file" ] && [ -w "$file" ] && [ -x "$file" ]; then  # Check condition
    echo "$file has read, write, and execute permissions"    # Print output message
else
    echo "$file does not have all permissions"               # Print output message
fi

echo "Pyramid of *:"                                         # Print output message
for ((i=1; i<=4; i++)); do                                   # Iterate through loop
    for ((j=1; j<=i; j++)); do                               # Iterate through loop
        echo -n "* "                                         # Print output message
    done
    echo ""                                                  # Print output message
done
