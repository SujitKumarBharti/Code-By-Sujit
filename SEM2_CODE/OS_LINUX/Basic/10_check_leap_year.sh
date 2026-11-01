#!/bin/bash


year=2024

if [ $(( year % 400 )) -eq 0 ] || ( [ $(( year % 4 )) -eq 0 ] && [ $(( year % 100 )) -ne 0 ] ); then
    echo "$year is a Leap Year."
else
    echo "$year is NOT a Leap Year."
fi
