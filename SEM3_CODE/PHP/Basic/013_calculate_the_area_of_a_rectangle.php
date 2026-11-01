<?php
$length = (float) readline("Enter length: ");                    // Prompt user for input
$width = (float) readline("Enter width: ");                      // Prompt user for input
$area = $length * $width;                                        // Store variable value
echo "Area of Rectangle: " . number_format($area, 2) . PHP_EOL;  // Display calculate the area of a rectangle result
?>
