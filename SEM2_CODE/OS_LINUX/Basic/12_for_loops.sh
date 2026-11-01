#!/bin/bash

echo "1. Range loop (1 to 5):"               # Demonstrates range loops, C-style loops, and word-list loops
for i in {1..5}; do
    echo -n "$i "
done
echo ""

echo "2. C-style for loop (step 2):"
for (( i=10; i<=20; i+=2 )); do
    echo -n "$i "
done
echo ""

echo "3. Iterating over words/items:"
for fruit in Apple Banana Cherry Date; do
    echo "Fruit: $fruit"
done
