<?php
$src = [10, 20, 30, 40, 50];                                  // Store variable value
$dest = [];                                                   // Store variable value

foreach ($src as $x) {
    $dest[] = $x;                                             // Store variable value
}

echo "Source array     : " . implode(", ", $src) . PHP_EOL;   // Display copy one array into another result
echo "Destination array: " . implode(", ", $dest) . PHP_EOL;  // Display copy one array into another result
?>
