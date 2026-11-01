<?php
$a = (float) readline("Enter dividend: ");                   // Prompt user for input
$b = (float) readline("Enter divisor: ");                    // Prompt user for input

if ($b != 0) {                                               // Check condition
    echo "Quotient: " . ($a / $b) . PHP_EOL;                 // Display divide two numbers result
} else {
    echo "Error: Division by zero is undefined." . PHP_EOL;  // Display error message for invalid input
}
?>
