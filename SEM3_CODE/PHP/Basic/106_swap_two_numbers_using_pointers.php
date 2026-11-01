<?php
function swapByRef(&$x, &$y) {
    $temp = $x;                                // Store variable value
    $x = $y;                                   // Store variable value
    $y = $temp;                                // Store variable value
}

$a = 15;                                       // Store variable value
$b = 75;                                       // Store variable value
echo "Before swap: a = $a, b = $b" . PHP_EOL;  // Display swap two numbers using pointers ... result
swapByRef($a, $b);
echo "After swap : a = $a, b = $b" . PHP_EOL;  // Display swap two numbers using pointers ... result
?>
