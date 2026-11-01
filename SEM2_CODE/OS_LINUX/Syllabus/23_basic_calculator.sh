#!/bin/bash
a=${1:-20}                                   # Set variable value
b=${2:-5}                                    # Set variable value
echo "Addition: $((a + b))"                  # Print output message
echo "Subtraction: $((a - b))"               # Print output message
echo "Multiplication: $((a * b))"            # Print output message
echo "Division: $((a / b))"                  # Print output message
