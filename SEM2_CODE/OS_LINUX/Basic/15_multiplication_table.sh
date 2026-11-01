#!/bin/bash


num=7
echo "Multiplication Table for $num:"
for i in {1..10}; do
    echo "$num x $i = $(( num * i ))"
done
