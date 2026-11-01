<?php
$n = (int) readline("Enter an integer: ");       // Prompt user for input

$isPrime = true;                                 // Store variable value
if ($n <= 1) {                                   // Check condition
    $isPrime = false;                            // Store variable value
} else {
    for ($i = 2; $i * $i <= $n; $i++) {          // Iterate through loop
        if ($n % $i == 0) {                      // Check condition
            $isPrime = false;                    // Store variable value
            break;
        }
    }
}

if ($isPrime) {                                  // Check condition
    echo "$n is a Prime number." . PHP_EOL;      // Display check whether a number is prime result
} else {
    echo "$n is NOT a Prime number." . PHP_EOL;  // Display check whether a number is prime result
}
?>
