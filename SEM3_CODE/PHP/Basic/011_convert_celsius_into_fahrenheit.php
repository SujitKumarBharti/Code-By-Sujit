<?php
$c = (float) readline("Enter temperature in Celsius: ");  // Prompt user for input
$f = ($c * 9.0 / 5.0) + 32.0;                             // Store variable value
echo "$c Celsius = $f Fahrenheit" . PHP_EOL;              // Display convert Celsius into Fahrenheit result
?>
