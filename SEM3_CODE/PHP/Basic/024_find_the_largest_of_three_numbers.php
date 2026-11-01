<?php
$a = (float) readline("Enter first number: ");   // Prompt user for input
$b = (float) readline("Enter second number: ");  // Prompt user for input
$c = (float) readline("Enter third number: ");   // Prompt user for input

$largest = max($a, $b, $c);                      // Store variable value
echo "Largest number is: $largest" . PHP_EOL;    // Display find the largest of three numbers result
?>
