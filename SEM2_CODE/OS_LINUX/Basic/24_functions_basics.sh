#!/bin/bash

greet_user() {                               # Demonstrates function declaration, arguments ($1, $2), and local variables
    local username=$1
    echo "Welcome to Bash functions, $username!"
}

calculate_area_rectangle() {
    local length=$1
    local breadth=$2
    local area=$(( length * breadth ))
    echo $area
}

greet_user "Sujit"
rect_area=$(calculate_area_rectangle 12 5)
echo "Area of rectangle (12 x 5) = $rect_area"
