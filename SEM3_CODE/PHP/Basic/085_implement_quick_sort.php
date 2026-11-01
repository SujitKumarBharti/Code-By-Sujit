<?php
function quickSort($arr) {
    if (count($arr) < 2) return $arr;                      // Check condition

    $pivot = $arr[0];                                      // Store variable value
    $left = [];                                            // Store variable value
    $right = [];                                           // Store variable value

    for ($i = 1; $i < count($arr); $i++) {                 // Iterate through loop
        if ($arr[$i] <= $pivot) $left[] = $arr[$i];        // Check condition
        else $right[] = $arr[$i];                          // Perform calculation
    }

    return array_merge(quickSort($left), [$pivot], quickSort($right));
}

$arr = [10, 7, 8, 9, 1, 5];                                // Store variable value
echo "Original: " . implode(", ", $arr) . PHP_EOL;         // Display implement Quick Sort result
$sorted = quickSort($arr);                                 // Store variable value
echo "Quick Sorted: " . implode(", ", $sorted) . PHP_EOL;  // Display implement Quick Sort result
?>
