#!/bin/bash

str1="Linux"                                 # = (equal), != (not equal), -z (empty string), -n (non-empty string)
str2="Ubuntu"

if [ "$str1" = "$str2" ]; then
    echo "Strings are identical."
else
    echo "Strings are different ('$str1' vs '$str2')."
fi

empty_str=""
if [ -z "$empty_str" ]; then
    echo "Variable empty_str is empty (length 0)."
fi

if [ -n "$str1" ]; then
    echo "Variable str1 is not empty (length: ${#str1})."
fi
