<?php
$a = (float) readline("Enter a: ");                                                                // Prompt user for input
$b = (float) readline("Enter b: ");                                                                // Prompt user for input
$c = (float) readline("Enter c: ");                                                                // Prompt user for input

if ($a == 0) {                                                                                     // Check condition
    echo "Not a quadratic equation (a cannot be zero)." . PHP_EOL;                                 // Display find the roots of a quadratic eq... result
    exit;
}

$disc = $b * $b - 4 * $a * $c;                                                                     // Store variable value

if ($disc > 0) {                                                                                   // Check condition
    $r1 = (-$b + sqrt($disc)) / (2 * $a);                                                          // Store variable value
    $r2 = (-$b - sqrt($disc)) / (2 * $a);                                                          // Store variable value
    echo "Real roots: " . number_format($r1, 2) . " and " . number_format($r2, 2) . PHP_EOL;       // Display find the roots of a quadratic eq... result
} elseif ($disc == 0) {
    $r = -$b / (2 * $a);                                                                           // Store variable value
    echo "Real and equal root: " . number_format($r, 2) . PHP_EOL;                                 // Display find the roots of a quadratic eq... result
} else {
    $real = -$b / (2 * $a);                                                                        // Store variable value
    $imag = sqrt(-$disc) / (2 * $a);                                                               // Store variable value
    echo "Complex roots: " . number_format($real, 2) . " + " . number_format($imag, 2) . "i and "  // Display find the roots of a quadratic eq... result
         . number_format($real, 2) . " - " . number_format($imag, 2) . "i" . PHP_EOL;
}
?>
