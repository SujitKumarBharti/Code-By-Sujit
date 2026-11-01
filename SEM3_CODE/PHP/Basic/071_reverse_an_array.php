<?php
$arr = [1, 2, 3, 4, 5];                                   // Store variable value
echo "Original array: " . implode(", ", $arr) . PHP_EOL;  // Display reverse an array result

$n = count($arr);                                         // Store variable value
for ($i = 0, $j = $n - 1; $i < $j; $i++, $j--) {          // Iterate through loop
    $temp = $arr[$i];                                     // Store variable value
    $arr[$i] = $arr[$j];                                  // Store variable value
    $arr[$j] = $temp;                                     // Store variable value
}

echo "Reversed array: " . implode(", ", $arr) . PHP_EOL;  // Display reverse an array result
?>
