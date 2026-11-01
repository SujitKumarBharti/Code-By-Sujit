<?php
function mergeSort($arr) {
    if (count($arr) <= 1) return $arr;                     // Check condition

    $mid = (int)(count($arr) / 2);                         // Store variable value
    $left = mergeSort(array_slice($arr, 0, $mid));         // Store variable value
    $right = mergeSort(array_slice($arr, $mid));           // Store variable value

    return merge($left, $right);
}

function merge($left, $right) {
    $result = [];                                          // Store variable value
    $i = 0;                                                // Store variable value
    $j = 0;                                                // Store variable value
    while ($i < count($left) && $j < count($right)) {      // Iterate through loop
        if ($left[$i] <= $right[$j]) {                     // Check condition
            $result[] = $left[$i++];                       // Store variable value
        } else {
            $result[] = $right[$j++];                      // Store variable value
        }
    }
    while ($i < count($left)) $result[] = $left[$i++];     // Iterate through loop
    while ($j < count($right)) $result[] = $right[$j++];   // Iterate through loop
    return $result;
}

$arr = [38, 27, 43, 3, 9, 82, 10];                         // Store variable value
echo "Original: " . implode(", ", $arr) . PHP_EOL;         // Display implement Merge Sort result
$sorted = mergeSort($arr);                                 // Store variable value
echo "Merge Sorted: " . implode(", ", $sorted) . PHP_EOL;  // Display implement Merge Sort result
?>
