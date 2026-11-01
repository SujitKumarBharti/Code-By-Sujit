#!/bin/bash
user=${1:-$(whoami)}                              # Set variable value
if id "$user" &>/dev/null; then                   # Check condition
    echo "Login name '$user' is valid"            # Print output message
else
    echo "Entered login name '$user' is invalid"  # Print output message
fi
