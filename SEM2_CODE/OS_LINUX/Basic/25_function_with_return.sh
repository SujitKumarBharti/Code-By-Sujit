#!/bin/bash


is_even() {
    local n=$1
    if [ $(( n % 2 )) -eq 0 ]; then
        return 0                             # 0 indicates SUCCESS (True in shell)
    else
        return 1                             # 1 indicates FAILURE (False in shell)
    fi
}

check_num=44
is_even $check_num
status=$?

if [ $status -eq 0 ]; then
    echo "$check_num is Even (Exit status: $status)"
else
    echo "$check_num is Odd (Exit status: $status)"
fi
