<?php
$n = (int) readline("Enter N: ");                         // Prompt user for input
$sum = 0;                                                 // Store variable value
for ($i = 2; $i <= $n; $i += 2) {                         // Iterate through loop
    $sum += $i;                                           // Store variable value
}
echo "Sum of even numbers from 1 to $n: $sum" . PHP_EOL;  // Display find the sum of even numbers fro... result
?>
