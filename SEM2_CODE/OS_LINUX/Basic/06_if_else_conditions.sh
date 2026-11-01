#!/bin/bash

num=15                                       # -eq (equal), -ne (not equal), -gt (greater), -ge (greater/equal), -lt (less), -le (less/equal)

if [ $num -gt 0 ]; then
    echo "$num is Positive"
elif [ $num -lt 0 ]; then
    echo "$num is Negative"
else
    echo "Number is Zero"
fi

if [ $num -ge 10 ] && [ $num -le 20 ]; then  # Logical AND (-a or &&) and OR (-o or ||)
    echo "$num lies between 10 and 20 (inclusive)."
fi
