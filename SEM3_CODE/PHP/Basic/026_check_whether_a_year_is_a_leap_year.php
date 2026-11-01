<?php
$year = (int) readline("Enter a year: ");                          // Prompt user for input

if (($year % 400 == 0) || ($year % 4 == 0 && $year % 100 != 0)) {  // Check condition
    echo "$year is a Leap Year." . PHP_EOL;                        // Display check whether a year is a leap year result
} else {
    echo "$year is NOT a Leap Year." . PHP_EOL;                    // Display check whether a year is a leap year result
}
?>
