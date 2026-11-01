#!/bin/bash
echo "Line B" > f1.txt                       # Print output message
echo "Line A" > f2.txt                       # Print output message
echo "Line C" > f3.txt                       # Print output message
cat f1.txt f2.txt f3.txt | sort
rm -f f1.txt f2.txt f3.txt
