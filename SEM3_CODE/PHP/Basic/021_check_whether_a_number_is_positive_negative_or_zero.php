<?php
$num = (float) readline("Enter a number: ");  // Prompt user for input
if ($num > 0) {                               // Check condition
    echo "$num is Positive." . PHP_EOL;       // Display check whether a number is positi... result
} elseif ($num < 0) {
    echo "$num is Negative." . PHP_EOL;       // Display check whether a number is positi... result
} else {
    echo "The number is Zero." . PHP_EOL;     // Display check whether a number is positi... result
}
?>
