<?php
$a = (int) readline("Enter first integer: ");   // Prompt user for input
$b = (int) readline("Enter second integer: ");  // Prompt user for input

if ($b != 0) {                                  // Check condition
    echo "Remainder: " . ($a % $b) . PHP_EOL;   // Display find the remainder of two numbers result
} else {
    echo "Error: Division by zero." . PHP_EOL;  // Display error message for invalid input
}
?>
