<?php
$km = (float) readline("Enter distance in kilometers: ");     // Prompt user for input

$meters = $km * 1000.0;                                       // Store variable value
$cm = $km * 100000.0;                                         // Store variable value

echo "$km km = $meters meters = $cm centimeters." . PHP_EOL;  // Display convert kilometers into meters a... result
?>
