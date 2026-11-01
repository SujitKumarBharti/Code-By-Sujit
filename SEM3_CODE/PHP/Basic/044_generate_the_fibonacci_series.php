<?php
$n = (int) readline("Enter number of terms: ");  // Prompt user for input
$a = 0;                                          // Store variable value
$b = 1;                                          // Store variable value

echo "Fibonacci series: ";                       // Display generate the Fibonacci series result
for ($i = 1; $i <= $n; $i++) {                   // Iterate through loop
    echo $a . " ";                               // Display generate the Fibonacci series result
    $next = $a + $b;                             // Store variable value
    $a = $b;                                     // Store variable value
    $b = $next;                                  // Store variable value
}
echo PHP_EOL;                                    // Display generate the Fibonacci series result
?>
