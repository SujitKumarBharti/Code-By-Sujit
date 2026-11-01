<?php
$radius = (float) readline("Enter radius of circle: ");       // Prompt user for input
$area = pi() * $radius * $radius;                             // Store variable value
echo "Area of Circle: " . number_format($area, 2) . PHP_EOL;  // Display calculate the area of a circle result
?>
