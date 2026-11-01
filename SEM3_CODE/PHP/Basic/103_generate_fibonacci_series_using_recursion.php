<?php
function fibonacci($n) {
    if ($n <= 0) return 0;                     // Check condition
    if ($n == 1) return 1;                     // Check condition
    return fibonacci($n - 1) + fibonacci($n - 2);
}

$terms = 9;                                    // Store variable value
echo "Fibonacci series up to $terms terms: ";  // Display generate Fibonacci series using ... result
for ($i = 0; $i < $terms; $i++) {              // Iterate through loop
    echo fibonacci($i) . " ";                  // Display generate Fibonacci series using ... result
}
echo PHP_EOL;                                  // Display generate Fibonacci series using ... result
?>
