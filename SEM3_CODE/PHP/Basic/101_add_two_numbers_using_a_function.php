<?php
function add($a, $b) {
    return $a + $b;
}

$x = 25;                                     // Store variable value
$y = 45;                                     // Store variable value
echo "$x + $y = " . add($x, $y) . PHP_EOL;   // Display add two numbers using a function result
?>
