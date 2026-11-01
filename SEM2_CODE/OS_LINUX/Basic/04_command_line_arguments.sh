#!/bin/bash


echo "Script Name           (\$0): $0"
echo "First Argument        (\$1): ${1:-None}"
echo "Second Argument       (\$2): ${2:-None}"
echo "Total Arguments Count (\$#): $#"
echo "All Arguments Array   (\$@): $@"
echo "All Arguments String  (\$*): $*"
echo "Process ID of Script  (\$\$): $$"
