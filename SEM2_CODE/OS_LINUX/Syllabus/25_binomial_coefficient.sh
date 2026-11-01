#!/bin/bash
fact() {
    local n=$1                               # Set variable value
    local f=1                                # Set variable value
    for ((i=2; i<=n; i++)); do               # Iterate through loop
        f=$((f * i))                         # Set variable value
    done
    echo $f                                  # Print output message
}

n=${1:-5}                                    # Set variable value
x=${2:-2}                                    # Set variable value
fn=$(fact "$n")                              # Set variable value
fx=$(fact "$x")                              # Set variable value
fnx=$(fact "$((n - x))")                     # Set variable value
c=$(( fn / (fx * fnx) ))                     # Set variable value
echo "C($n,$x) = $c"                         # Print output message
