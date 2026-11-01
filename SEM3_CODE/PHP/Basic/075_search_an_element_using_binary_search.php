<?php
$arr = [2, 5, 8, 12, 16, 23, 38, 56, 72, 91];            // Store variable value
$key = 23;                                               // Store variable value
$low = 0;                                                // Store variable value
$high = count($arr) - 1;                                 // Store variable value
$pos = -1;                                               // Store variable value

while ($low <= $high) {                                  // Iterate through loop
    $mid = (int)($low + ($high - $low) / 2);             // Store variable value
    if ($arr[$mid] == $key) {                            // Check condition
        $pos = $mid;                                     // Store variable value
        break;
    } elseif ($arr[$mid] < $key) {
        $low = $mid + 1;                                 // Store variable value
    } else {
        $high = $mid - 1;                                // Store variable value
    }
}

if ($pos != -1) {                                        // Check condition
    echo "Element $key found at index $pos." . PHP_EOL;  // Display search an element using Binary S... result
} else {
    echo "Element $key not found." . PHP_EOL;            // Display search an element using Binary S... result
}
?>
