<?php
$marks = (float) readline("Enter marks out of 100: ");  // Prompt user for input

if ($marks >= 90 && $marks <= 100) {                    // Check condition
    echo "Grade: A+" . PHP_EOL;                         // Display calculate student grades based o... result
} elseif ($marks >= 80) {
    echo "Grade: A" . PHP_EOL;                          // Display calculate student grades based o... result
} elseif ($marks >= 70) {
    echo "Grade: B" . PHP_EOL;                          // Display calculate student grades based o... result
} elseif ($marks >= 60) {
    echo "Grade: C" . PHP_EOL;                          // Display calculate student grades based o... result
} elseif ($marks >= 50) {
    echo "Grade: D" . PHP_EOL;                          // Display calculate student grades based o... result
} elseif ($marks >= 0) {
    echo "Grade: F (Fail)" . PHP_EOL;                   // Display calculate student grades based o... result
} else {
    echo "Invalid marks entered." . PHP_EOL;            // Display error message for invalid input
}
?>
