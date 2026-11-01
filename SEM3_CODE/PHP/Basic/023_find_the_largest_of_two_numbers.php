<?php
$a = (float) readline("Enter first number: ");      // Prompt user for input
$b = (float) readline("Enter second number: ");     // Prompt user for input

if ($a > $b) {                                      // Check condition
    echo "$a is larger than $b." . PHP_EOL;         // Display find the largest of two numbers result
} elseif ($b > $a) {
    echo "$b is larger than $a." . PHP_EOL;         // Display find the largest of two numbers result
} else {
    echo "Both numbers are equal ($a)." . PHP_EOL;  // Display find the largest of two numbers result
}
?>
