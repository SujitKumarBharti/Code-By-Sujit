#!/bin/bash


n1=45
n2=82
n3=19

if [ $n1 -ge $n2 ] && [ $n1 -ge $n3 ]; then
    largest=$n1
elif [ $n2 -ge $n1 ] && [ $n2 -ge $n3 ]; then
    largest=$n2
else
    largest=$n3
fi

echo "Among $n1, $n2, and $n3: Largest is $largest"
