<?php
$n = (int) readline("Enter an integer: ");                // Prompt user for input
if ($n < 0) {                                             // Check condition
    echo "$n is NOT an Armstrong number." . PHP_EOL;      // Display check whether a number is Armstrong result
} else {
    $digits = strlen((string)$n);                         // Store variable value
    $temp = $n;                                           // Store variable value
    $sum = 0;                                             // Store variable value
    while ($temp > 0) {                                   // Iterate through loop
        $rem = $temp % 10;                                // Store variable value
        $sum += pow($rem, $digits);                       // Store variable value
        $temp = (int)($temp / 10);                        // Store variable value
    }
    if ($sum == $n) {                                     // Check condition
        echo "$n is an Armstrong number." . PHP_EOL;      // Display check whether a number is Armstrong result
    } else {
        echo "$n is NOT an Armstrong number." . PHP_EOL;  // Display check whether a number is Armstrong result
    }
}
?>
