<?php
$n = (int) readline("Enter an integer: ");   // Prompt user for input
$temp = abs($n);                             // Store variable value
$rev = 0;                                    // Store variable value

while ($temp > 0) {                          // Iterate through loop
    $rev = $rev * 10 + ($temp % 10);         // Store variable value
    $temp = (int)($temp / 10);               // Store variable value
}
if ($n < 0) $rev = -$rev;                    // Check condition
echo "Reversed number: $rev" . PHP_EOL;      // Display reverse a number result
?>
