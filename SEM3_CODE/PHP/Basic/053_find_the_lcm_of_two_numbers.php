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
$gcd = $x;                                     // Store variable value
$lcm = ($gcd != 0) ? abs($a * $b) / $gcd : 0;  // Store variable value

echo "LCM of $a and $b is: $lcm" . PHP_EOL;    // Display find the LCM of two numbers result
?>
