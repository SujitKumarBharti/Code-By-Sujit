<?php
$a = (float) readline("Enter first number: ");        // Prompt user for input
$b = (float) readline("Enter second number: ");       // Prompt user for input
$c = (float) readline("Enter third number: ");        // Prompt user for input

$avg = ($a + $b + $c) / 3.0;                          // Store variable value
echo "Average: " . number_format($avg, 2) . PHP_EOL;  // Display calculate the average of three n... result
?>
