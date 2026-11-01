<?php
$arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];          // Store variable value
$even = 0;                                       // Store variable value
$odd = 0;                                        // Store variable value

foreach ($arr as $x) {
    if ($x % 2 == 0) $even++;                    // Check condition
    else $odd++;
}

echo "Array: " . implode(", ", $arr) . PHP_EOL;  // Display count even and odd elements in a... result
echo "Even count: $even" . PHP_EOL;              // Display count even and odd elements in a... result
echo "Odd count : $odd" . PHP_EOL;               // Display count even and odd elements in a... result
?>
