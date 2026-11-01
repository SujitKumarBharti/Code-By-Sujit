<?php
$n = (int) readline("Enter N: ");            // Prompt user for input
$a = 0;                                      // Store variable value
$b = 1;                                      // Store variable value

echo "First $n terms of Fibonacci: ";        // Display print the first N terms of the F... result
for ($i = 1; $i <= $n; $i++) {               // Iterate through loop
    echo $a . " ";                           // Display print the first N terms of the F... result
    $next = $a + $b;                         // Store variable value
    $a = $b;                                 // Store variable value
    $b = $next;                              // Store variable value
}
echo PHP_EOL;                                // Display print the first N terms of the F... result
?>
