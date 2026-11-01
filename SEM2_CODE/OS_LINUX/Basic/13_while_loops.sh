#!/bin/bash

count=1                                      # Runs while condition is true
echo "Counting up to 5 using while loop:"
while [ $count -le 5 ]; do
    echo "Count: $count"
    (( count++ ))
done
