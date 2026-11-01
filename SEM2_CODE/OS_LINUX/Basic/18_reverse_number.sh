#!/bin/bash


num=12345
temp=$num
rev=0

while [ $temp -gt 0 ]; do
    rem=$(( temp % 10 ))
    rev=$(( rev * 10 + rem ))
    temp=$(( temp / 10 ))
done

echo "Original Number: $num"
echo "Reversed Number: $rev"
