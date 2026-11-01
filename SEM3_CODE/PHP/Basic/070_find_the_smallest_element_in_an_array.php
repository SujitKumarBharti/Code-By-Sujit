<?php
$arr = [45, 12, 89, 32, 77];                     // Store variable value
$min = $arr[0];                                  // Store variable value
foreach ($arr as $x) {
    if ($x < $min) $min = $x;                    // Check condition
}
echo "Array: " . implode(", ", $arr) . PHP_EOL;  // Display find the smallest element in an ... result
echo "Smallest element: $min" . PHP_EOL;         // Display find the smallest element in an ... result
?>
