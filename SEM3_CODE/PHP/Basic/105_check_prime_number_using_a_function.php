<?php
function isPrime($n) {
    if ($n <= 1) return false;                                // Check condition
    for ($i = 2; $i * $i <= $n; $i++) {                       // Iterate through loop
        if ($n % $i == 0) return false;                       // Check condition
    }
    return true;
}

$num = 41;                                                    // Store variable value
if (isPrime($num)) echo "$num is a Prime number." . PHP_EOL;  // Display check prime number using a function result
else echo "$num is NOT a Prime number." . PHP_EOL;            // Display check prime number using a function result
?>
