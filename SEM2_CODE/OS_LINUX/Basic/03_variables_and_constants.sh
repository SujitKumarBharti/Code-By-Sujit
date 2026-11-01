#!/bin/bash


course="BCA"                                 # User-defined variables (no spaces around '=')
semester=2
subject="Operating Systems & Linux"

readonly PI=3.14159                          # Readonly variable (constant)

echo "Course  : $course"
echo "Semester: $semester"
echo "Subject : $subject"
echo "Constant PI: $PI"

echo "Current User : $USER"                  # Built-in environment variables
echo "Home Directory: $HOME"
echo "Current Shell : $SHELL"
