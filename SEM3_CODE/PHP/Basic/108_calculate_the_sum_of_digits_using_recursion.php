<?php
function sumOfDigits($n) {
    if ($n == 0) return 0;                                                     // Check condition
    return ($n % 10) + sumOfDigits((int)($n / 10));
}

$num = 54321;                                                                  // Store variable value
echo "Sum of digits of $num using recursion: " . sumOfDigits($num) . PHP_EOL;  // Display calculate the sum of digits usin... result
?>
