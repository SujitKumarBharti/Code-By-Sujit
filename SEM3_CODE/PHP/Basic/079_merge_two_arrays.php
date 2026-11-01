<?php
$a = [1, 3, 5];                                       // Store variable value
$b = [2, 4, 6];                                       // Store variable value
$merged = [];                                         // Store variable value

foreach ($a as $x) $merged[] = $x;                    // Perform calculation
foreach ($b as $x) $merged[] = $x;                    // Perform calculation

echo "Array 1: " . implode(", ", $a) . PHP_EOL;       // Display merge two arrays result
echo "Array 2: " . implode(", ", $b) . PHP_EOL;       // Display merge two arrays result
echo "Merged : " . implode(", ", $merged) . PHP_EOL;  // Display merge two arrays result
?>
