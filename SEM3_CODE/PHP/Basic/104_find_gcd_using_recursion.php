<?php
function gcd($a, $b) {
    if ($b == 0) return $a;                                         // Check condition
    return gcd($b, $a % $b);
}

$a = 56;                                                            // Store variable value
$b = 20;                                                            // Store variable value
echo "GCD of $a and $b using recursion: " . gcd($a, $b) . PHP_EOL;  // Display find GCD using recursion result
?>
