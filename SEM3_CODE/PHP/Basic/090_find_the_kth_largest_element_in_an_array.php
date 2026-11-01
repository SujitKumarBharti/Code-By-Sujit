<?php
$arr = [12, 3, 5, 7, 19, 26, 4];                                      // Store variable value
$k = 3;                                                               // Store variable value

rsort($arr);                                                          // Sort in descending order

if ($k > 0 && $k <= count($arr)) {                                    // Check condition
    echo "The {$k}th largest element is: " . $arr[$k - 1] . PHP_EOL;  // Display find the Kth largest element in ... result
} else {
    echo "Invalid K." . PHP_EOL;                                      // Display error message for invalid input
}
?>
