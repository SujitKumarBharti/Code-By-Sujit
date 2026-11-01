<?php
$p = (float) readline("Enter Principal: ");                  // Prompt user for input
$r = (float) readline("Enter Rate (%): ");                   // Prompt user for input
$t = (float) readline("Enter Time (years): ");               // Prompt user for input

$si = ($p * $r * $t) / 100.0;                                // Store variable value
echo "Simple Interest: " . number_format($si, 2) . PHP_EOL;  // Display calculate simple interest result
?>
