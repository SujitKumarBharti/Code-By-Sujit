<?php
$a = (float) readline("Enter first number: ");   // Prompt user for input
$b = (float) readline("Enter second number: ");  // Prompt user for input
$c = (float) readline("Enter third number: ");   // Prompt user for input

$smallest = min($a, $b, $c);                     // Store variable value
echo "Smallest number is: $smallest" . PHP_EOL;  // Display find the smallest of three numbers result
?>
