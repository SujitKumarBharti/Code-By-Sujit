<?php
$n = (int) readline("Enter an integer: ");         // Prompt user for input
if ($n < 0) {                                      // Check condition
    echo "$n is NOT a Palindrome." . PHP_EOL;      // Display check whether a number is palind... result
} else {
    $temp = $n;                                    // Store variable value
    $rev = 0;                                      // Store variable value
    while ($temp > 0) {                            // Iterate through loop
        $rev = $rev * 10 + ($temp % 10);           // Store variable value
        $temp = (int)($temp / 10);                 // Store variable value
    }
    if ($rev == $n) {                              // Check condition
        echo "$n is a Palindrome." . PHP_EOL;      // Display check whether a number is palind... result
    } else {
        echo "$n is NOT a Palindrome." . PHP_EOL;  // Display check whether a number is palind... result
    }
}
?>
