<?php
function insertionSort(&$arr) {
    $n = count($arr);                                       // Store variable value
    for ($i = 1; $i < $n; $i++) {                           // Iterate through loop
        $key = $arr[$i];                                    // Store variable value
        $j = $i - 1;                                        // Store variable value
        while ($j >= 0 && $arr[$j] > $key) {                // Iterate through loop
            $arr[$j + 1] = $arr[$j];                        // Store variable value
            $j--;
        }
        $arr[$j + 1] = $key;                                // Store variable value
    }
}

$arr = [12, 11, 13, 5, 6];                                  // Store variable value
echo "Original: " . implode(", ", $arr) . PHP_EOL;          // Display implement Insertion Sort result
insertionSort($arr);
echo "Insertion Sorted: " . implode(", ", $arr) . PHP_EOL;  // Display implement Insertion Sort result
?>
