<?php
$arr = [12, 24, 36, 48, 60];                                            // Store variable value
$sum = array_sum($arr);                                                 // Store variable value
$avg = $sum / count($arr);                                              // Store variable value

echo "Array: " . implode(", ", $arr) . PHP_EOL;                         // Display find the average of array elements result
echo "Average of array elements: " . number_format($avg, 2) . PHP_EOL;  // Display find the average of array elements result
?>
