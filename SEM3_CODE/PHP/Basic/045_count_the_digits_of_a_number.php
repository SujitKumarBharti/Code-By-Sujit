<?php
$n = (int) readline("Enter an integer: ");    // Prompt user for input
$temp = abs($n);                              // Store variable value
$count = ($temp == 0) ? 1 : 0;

while ($temp > 0) {                           // Iterate through loop
    $count++;
    $temp = (int)($temp / 10);                // Store variable value
}
echo "Total digits in $n: $count" . PHP_EOL;  // Display count the digits of a number result
?>
