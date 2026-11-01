#!/bin/bash

a=20                                         # Demonstrates $(( )), expr, and let
b=6

echo "Given a=$a, b=$b"
echo "Addition       : $(( a + b ))"
echo "Subtraction    : $(( a - b ))"
echo "Multiplication : $(( a * b ))"
echo "Division       : $(( a / b ))"
echo "Modulo         : $(( a % b ))"
echo "Exponentiation : $(( a ** 2 ))"

float_div=$(echo "scale=4; $a / $b" | bc)    # Floating point calculation using bc
echo "Floating Point Division: $float_div"
