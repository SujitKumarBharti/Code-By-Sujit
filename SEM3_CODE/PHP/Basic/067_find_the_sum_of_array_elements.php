<?php
$arr = [10, 20, 30, 40, 50];                     // Store variable value
$sum = 0;                                        // Store variable value
foreach ($arr as $x) {
    $sum += $x;                                  // Store variable value
}
echo "Array: " . implode(", ", $arr) . PHP_EOL;  // Display find the sum of array elements result
echo "Sum of array elements: $sum" . PHP_EOL;    // Display find the sum of array elements result
?>
