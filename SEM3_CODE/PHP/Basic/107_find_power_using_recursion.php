<?php
function power($base, $exp) {
    if ($exp == 0) return 1.0;                                          // Check condition
    if ($exp < 0) return 1.0 / power($base, -$exp);                     // Check condition
    return $base * power($base, $exp - 1);
}

$base = 2.0;                                                            // Store variable value
$exp = 5;                                                               // Store variable value
echo "$base ^ $exp using recursion = " . power($base, $exp) . PHP_EOL;  // Display find power using recursion result
?>
