<?php
$a = (int) readline("Enter value of a: ");         // Prompt user for input
$b = (int) readline("Enter value of b: ");         // Prompt user for input

echo "Before swapping: a = $a, b = $b" . PHP_EOL;  // Display swap two numbers using a third v... result
$temp = $a;                                        // Store variable value
$a = $b;                                           // Store variable value
$b = $temp;                                        // Store variable value
echo "After swapping : a = $a, b = $b" . PHP_EOL;  // Display swap two numbers using a third v... result
?>
