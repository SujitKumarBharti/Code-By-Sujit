#!/bin/bash


calculate() {
    local op=$1
    local a=$2
    local b=$3

    case $op in
        1) echo "$a + $b = $(( a + b ))" ;;
        2) echo "$a - $b = $(( a - b ))" ;;
        3) echo "$a * $b = $(( a * b ))" ;;
        4)
            if [ $b -eq 0 ]; then
                echo "Error: Division by zero!"
            else
                echo "$a / $b = $(( a / b ))"
            fi
            ;;
        *) echo "Invalid operation selected" ;;
    esac
}

echo "=== Menu Driven Calculator Demo ==="
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"

choice=1                                     # Demonstrating automated sample run
num1=25
num2=15
echo -e "\nRunning Choice $choice for numbers $num1 and $num2:"
calculate $choice $num1 $num2
