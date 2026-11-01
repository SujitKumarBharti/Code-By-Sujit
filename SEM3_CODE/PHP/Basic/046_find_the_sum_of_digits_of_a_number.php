<?php
$n = (int) readline("Enter an integer: ");   // Prompt user for input
$temp = abs($n);                             // Store variable value
$sum = 0;                                    // Store variable value

while ($temp > 0) {                          // Iterate through loop
    $sum += ($temp % 10);                    // Store variable value
    $temp = (int)($temp / 10);               // Store variable value
}
echo "Sum of digits of $n: $sum" . PHP_EOL;  // Display find the sum of digits of a number result
?>
