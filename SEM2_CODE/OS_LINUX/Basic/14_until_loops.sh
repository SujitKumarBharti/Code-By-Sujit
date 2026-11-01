#!/bin/bash

val=5                                        # Runs until condition becomes true (i.e. runs while condition is false)
echo "Countdown using until loop:"
until [ $val -lt 1 ]; do
    echo "Value: $val"
    (( val-- ))
done
echo "Blast off!"
