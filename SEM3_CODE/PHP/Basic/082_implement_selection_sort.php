<?php
function selectionSort(&$arr) {
    $n = count($arr);                                       // Store variable value
    for ($i = 0; $i < $n - 1; $i++) {                       // Iterate through loop
        $min = $i;                                          // Store variable value
        for ($j = $i + 1; $j < $n; $j++) {                  // Iterate through loop
            if ($arr[$j] < $arr[$min]) {                    // Check condition
                $min = $j;                                  // Store variable value
            }
        }
        $temp = $arr[$i];                                   // Store variable value
        $arr[$i] = $arr[$min];                              // Store variable value
        $arr[$min] = $temp;                                 // Store variable value
    }
}

$arr = [29, 10, 14, 37, 13];                                // Store variable value
echo "Original: " . implode(", ", $arr) . PHP_EOL;          // Display implement Selection Sort result
selectionSort($arr);
echo "Selection Sorted: " . implode(", ", $arr) . PHP_EOL;  // Display implement Selection Sort result
?>
