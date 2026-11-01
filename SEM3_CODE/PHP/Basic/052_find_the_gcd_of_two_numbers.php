<?php
$a = (int) readline("Enter first number: ");   // Prompt user for input
$b = (int) readline("Enter second number: ");  // Prompt user for input

$x = abs($a);                                  // Store variable value
$y = abs($b);                                  // Store variable value

while ($y != 0) {                              // Iterate through loop
    $temp = $y;                                // Store variable value
    $y = $x % $y;                              // Store variable value
    $x = $temp;                                // Store variable value
}

echo "GCD of $a and $b is: $x" . PHP_EOL;      // Display find the GCD of two numbers result
?>
