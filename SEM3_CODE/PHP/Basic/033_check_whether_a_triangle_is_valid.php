<?php
$a = (float) readline("Enter first angle: ");                 // Prompt user for input
$b = (float) readline("Enter second angle: ");                // Prompt user for input
$c = (float) readline("Enter third angle: ");                 // Prompt user for input

if ($a > 0 && $b > 0 && $c > 0 && ($a + $b + $c == 180.0)) {  // Check condition
    echo "The triangle is VALID." . PHP_EOL;                  // Display check whether a triangle is valid result
} else {
    echo "The triangle is INVALID." . PHP_EOL;                // Display error message for invalid input
}
?>
