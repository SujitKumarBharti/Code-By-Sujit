<?php
$base = (float) readline("Enter base: ");                       // Prompt user for input
$height = (float) readline("Enter height: ");                   // Prompt user for input
$area = 0.5 * $base * $height;                                  // Store variable value
echo "Area of Triangle: " . number_format($area, 2) . PHP_EOL;  // Display calculate the area of a triangle result
?>
