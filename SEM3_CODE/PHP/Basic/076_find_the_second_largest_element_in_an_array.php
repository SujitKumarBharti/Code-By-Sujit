<?php
$arr = [12, 35, 1, 10, 34, 1];                     // Store variable value
$first = -INF;                                     // Store variable value
$second = -INF;                                    // Store variable value

foreach ($arr as $x) {
    if ($x > $first) {                             // Check condition
        $second = $first;                          // Store variable value
        $first = $x;                               // Store variable value
    } elseif ($x > $second && $x != $first) {
        $second = $x;                              // Store variable value
    }
}

echo "Array: " . implode(", ", $arr) . PHP_EOL;    // Display find the second-largest element ... result
echo "Second largest element: $second" . PHP_EOL;  // Display find the second-largest element ... result
?>
