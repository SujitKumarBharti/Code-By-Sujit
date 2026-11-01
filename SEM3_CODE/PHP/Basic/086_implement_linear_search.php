<?php
function linearSearch($arr, $key) {
    foreach ($arr as $index => $value) {                 // Perform calculation
        if ($value == $key) return $index;               // Check condition
    }
    return -1;
}

$arr = [15, 23, 7, 42, 19, 8];                           // Store variable value
$key = 42;                                               // Store variable value
$pos = linearSearch($arr, $key);                         // Store variable value

if ($pos != -1) {                                        // Check condition
    echo "Element $key found at index $pos." . PHP_EOL;  // Display implement Linear Search result
} else {
    echo "Element $key not found in array." . PHP_EOL;   // Display implement Linear Search result
}
?>
