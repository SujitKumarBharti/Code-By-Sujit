#!/bin/bash


numbers=(14 67 23 89 5 42)
echo "Given array: ${numbers[@]}"

sum=0
max=${numbers[0]}

for n in "${numbers[@]}"; do
    sum=$(( sum + n ))
    if [ $n -gt $max ]; then
        max=$n
    fi
done

avg=$(echo "scale=2; $sum / ${#numbers[@]}" | bc)

echo "Sum     : $sum"
echo "Average : $avg"
echo "Maximum : $max"
