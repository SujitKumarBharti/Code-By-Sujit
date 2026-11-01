<?php
$arr = [5, 15, 25, 35, 45];                                   // Store variable value
$sum = 0;                                                     // Store variable value

foreach ($arr as &$elem) {
    $sum += $elem;                                            // Store variable value
}
unset($elem);

echo "Sum of array elements via references: $sum" . PHP_EOL;  // Display find the sum of array elements u... result
?>
