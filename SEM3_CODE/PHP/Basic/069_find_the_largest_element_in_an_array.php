<?php
$arr = [45, 12, 89, 32, 77];                     // Store variable value
$max = $arr[0];                                  // Store variable value
foreach ($arr as $x) {
    if ($x > $max) $max = $x;                    // Check condition
}
echo "Array: " . implode(", ", $arr) . PHP_EOL;  // Display find the largest element in an a... result
echo "Largest element: $max" . PHP_EOL;          // Display find the largest element in an a... result
?>
