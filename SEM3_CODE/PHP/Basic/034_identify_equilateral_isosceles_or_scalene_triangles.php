<?php
$s1 = (float) readline("Enter side 1: ");                        // Prompt user for input
$s2 = (float) readline("Enter side 2: ");                        // Prompt user for input
$s3 = (float) readline("Enter side 3: ");                        // Prompt user for input

if ($s1 + $s2 > $s3 && $s1 + $s3 > $s2 && $s2 + $s3 > $s1) {     // Check condition
    if ($s1 == $s2 && $s2 == $s3) {                              // Check condition
        echo "Equilateral Triangle" . PHP_EOL;                   // Display identify equilateral, isosceles,... result
    } elseif ($s1 == $s2 || $s2 == $s3 || $s1 == $s3) {
        echo "Isosceles Triangle" . PHP_EOL;                     // Display identify equilateral, isosceles,... result
    } else {
        echo "Scalene Triangle" . PHP_EOL;                       // Display identify equilateral, isosceles,... result
    }
} else {
    echo "Given sides do not form a valid triangle." . PHP_EOL;  // Display identify equilateral, isosceles,... result
}
?>
