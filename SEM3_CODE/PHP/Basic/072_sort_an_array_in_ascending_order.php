<?php
$arr = [64, 25, 12, 22, 11];                               // Store variable value
$n = count($arr);                                          // Store variable value

for ($i = 0; $i < $n - 1; $i++) {                          // Iterate through loop
    for ($j = 0; $j < $n - $i - 1; $j++) {                 // Iterate through loop
        if ($arr[$j] > $arr[$j + 1]) {                     // Check condition
            $temp = $arr[$j];                              // Store variable value
            $arr[$j] = $arr[$j + 1];                       // Store variable value
            $arr[$j + 1] = $temp;                          // Store variable value
        }
    }
}

echo "Ascending order: " . implode(", ", $arr) . PHP_EOL;  // Display sort an array in ascending order result
?>
