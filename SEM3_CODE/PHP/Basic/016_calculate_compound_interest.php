<?php
$p = (float) readline("Enter Principal: ");                        // Prompt user for input
$r = (float) readline("Enter Rate (%): ");                         // Prompt user for input
$t = (float) readline("Enter Time (years): ");                     // Prompt user for input

$amount = $p * pow((1 + $r / 100.0), $t);                          // Store variable value
$ci = $amount - $p;                                                // Store variable value

echo "Compound Interest: " . number_format($ci, 2) . PHP_EOL;      // Display calculate compound interest result
echo "Total Amount     : " . number_format($amount, 2) . PHP_EOL;  // Display calculate compound interest result
?>
