#!/bin/bash

msg="Hello Linux World"                      # Length, Substring, Case Conversion, and Replacement

echo "Original string        : $msg"
echo "Length of string       : ${#msg}"
echo "Substring (offset 6, len 5): ${msg:6:5}"
echo "Uppercase (${msg^^})   : ${msg^^}"
echo "Lowercase (${msg,,})   : ${msg,,}"
echo "Replace 'Linux' with 'Unix': ${msg/Linux/Unix}"
