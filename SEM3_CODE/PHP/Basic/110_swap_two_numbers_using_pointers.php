<?php
function swapValues(&$num1, &$num2) {
    $temp = $num1;                             // Store variable value
    $num1 = $num2;                             // Store variable value
    $num2 = $temp;                             // Store variable value
}

$p = 33;                                       // Store variable value
$q = 88;                                       // Store variable value
echo "Before swap: p = $p, q = $q" . PHP_EOL;  // Display swap two numbers using pointers ... result
swapValues($p, $q);
echo "After swap : p = $p, q = $q" . PHP_EOL;  // Display swap two numbers using pointers ... result
?>
