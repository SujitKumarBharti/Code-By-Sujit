#!/bin/bash


terms=8
a=0
b=1

echo "Fibonacci Series ($terms terms):"
for (( i=0; i<terms; i++ )); do
    echo -n "$a "
    next=$(( a + b ))
    a=$b
    b=$next
done
echo ""
