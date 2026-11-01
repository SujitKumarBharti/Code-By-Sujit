<?php
$op = readline("Enter operator (+, -, *, /): ");        // Prompt user for input
$a = (float) readline("Enter first operand: ");         // Prompt user for input
$b = (float) readline("Enter second operand: ");        // Prompt user for input

switch ($op) {
    case '+':
        echo "$a + $b = " . ($a + $b) . PHP_EOL;        // Display create a simple calculator using... result
        break;
    case '-':
        echo "$a - $b = " . ($a - $b) . PHP_EOL;        // Display create a simple calculator using... result
        break;
    case '*':
        echo "$a * $b = " . ($a * $b) . PHP_EOL;        // Display create a simple calculator using... result
        break;
    case '/':
        if ($b != 0) {                                  // Check condition
            echo "$a / $b = " . ($a / $b) . PHP_EOL;    // Display create a simple calculator using... result
        } else {
            echo "Error: Division by zero!" . PHP_EOL;  // Display error message for invalid input
        }
        break;
    default:
        echo "Error: Invalid operator!" . PHP_EOL;      // Display error message for invalid input
        break;
}
?>
