#!/bin/bash

read -p "Enter your name: " name             # Demonstrates read command with prompts and silent input
read -p "Enter your age: " age

echo "Hello, $name! You are $age years old."

read -sp "Enter a secret key: " secret       # Silent input (e.g. passwords)
echo -e "\nSecret key received (length: ${#secret} characters)."
