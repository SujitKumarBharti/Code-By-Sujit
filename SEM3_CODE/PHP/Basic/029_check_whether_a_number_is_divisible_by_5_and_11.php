<?php
$n = (int) readline("Enter an integer: ");                   // Prompt user for input

if ($n % 5 == 0 && $n % 11 == 0) {                           // Check condition
    echo "$n is divisible by both 5 and 11." . PHP_EOL;      // Display check whether a number is divisi... result
} else {
    echo "$n is NOT divisible by both 5 and 11." . PHP_EOL;  // Display check whether a number is divisi... result
}
?>
