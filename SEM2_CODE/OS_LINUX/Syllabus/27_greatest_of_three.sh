#!/bin/bash
a=${1:-15}                                         # Set variable value
b=${2:-42}                                         # Set variable value
c=${3:-28}                                         # Set variable value
if [ "$a" -ge "$b" ] && [ "$a" -ge "$c" ]; then    # Check condition
    echo "Greatest: $a"                            # Print output message
elif [ "$b" -ge "$a" ] && [ "$b" -ge "$c" ]; then  # Check condition
    echo "Greatest: $b"                            # Print output message
else
    echo "Greatest: $c"                            # Print output message
fi
