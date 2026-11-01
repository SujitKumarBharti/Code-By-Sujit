<?php
function factorial($n) {
    if ($n <= 1) return 1;                                           // Check condition
    return $n * factorial($n - 1);
}

$n = 6;                                                              // Store variable value
echo "Factorial of $n using recursion: " . factorial($n) . PHP_EOL;  // Display find factorial using recursion result
?>
