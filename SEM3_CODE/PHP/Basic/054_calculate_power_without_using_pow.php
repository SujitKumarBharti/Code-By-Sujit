<?php
$base = (float) readline("Enter base: ");           // Prompt user for input
$exp = (int) readline("Enter integer exponent: ");  // Prompt user for input

$result = 1.0;                                      // Store variable value
$e = abs($exp);                                     // Store variable value

for ($i = 0; $i < $e; $i++) {                       // Iterate through loop
    $result *= $base;                               // Store variable value
}

if ($exp < 0) {                                     // Check condition
    $result = 1.0 / $result;                        // Store variable value
}

echo "$base ^ $exp = $result" . PHP_EOL;            // Display calculate power without using pow() result
?>
