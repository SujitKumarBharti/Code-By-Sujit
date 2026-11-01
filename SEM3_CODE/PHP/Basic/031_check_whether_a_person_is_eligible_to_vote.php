<?php
$age = (int) readline("Enter your age: ");                                          // Prompt user for input

if ($age >= 18) {                                                                   // Check condition
    echo "Eligible to vote." . PHP_EOL;                                             // Display check whether a person is eligib... result
} else {
    echo "Not eligible to vote. Wait " . (18 - $age) . " more year(s)." . PHP_EOL;  // Display check whether a person is eligib... result
}
?>
