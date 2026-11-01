<?php
$arr = [1, 2, 2, 3, 4, 4, 5];                                    // Store variable value
$unique = [];                                                    // Store variable value

foreach ($arr as $x) {
    if (!in_array($x, $unique)) {                                // Check condition
        $unique[] = $x;                                          // Store variable value
    }
}

echo "Original array    : " . implode(", ", $arr) . PHP_EOL;     // Display remove duplicate elements from a... result
echo "Without duplicates: " . implode(", ", $unique) . PHP_EOL;  // Display remove duplicate elements from a... result
?>
