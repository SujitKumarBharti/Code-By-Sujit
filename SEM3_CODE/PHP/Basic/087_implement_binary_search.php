<?php
function binarySearch($arr, $key) {
    $low = 0;                                            // Store variable value
    $high = count($arr) - 1;                             // Store variable value

    while ($low <= $high) {                              // Iterate through loop
        $mid = (int)($low + ($high - $low) / 2);         // Store variable value
        if ($arr[$mid] == $key) return $mid;             // Check condition
        elseif ($arr[$mid] < $key) $low = $mid + 1;      // Perform calculation
        else $high = $mid - 1;                           // Perform calculation
    }
    return -1;
}

$arr = [2, 5, 8, 12, 16, 23, 38, 56, 72, 91];            // Store variable value
$key = 23;                                               // Store variable value
$pos = binarySearch($arr, $key);                         // Store variable value

if ($pos != -1) {                                        // Check condition
    echo "Element $key found at index $pos." . PHP_EOL;  // Display implement Binary Search result
} else {
    echo "Element $key not found." . PHP_EOL;            // Display implement Binary Search result
}
?>
