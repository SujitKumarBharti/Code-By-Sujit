<?php
$n = (int) readline("Enter non-negative integer: ");                  // Prompt user for input
if ($n < 0) {                                                         // Check condition
    echo "Factorial is not defined for negative numbers." . PHP_EOL;  // Display find the factorial of a number result
} else {
    $fact = 1;                                                        // Store variable value
    for ($i = 1; $i <= $n; $i++) {                                    // Iterate through loop
        $fact *= $i;                                                  // Store variable value
    }
    echo "Factorial of $n = $fact" . PHP_EOL;                         // Display find the factorial of a number result
}
?>
