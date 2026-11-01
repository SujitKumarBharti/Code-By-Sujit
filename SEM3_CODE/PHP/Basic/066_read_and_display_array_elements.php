<?php
$n = (int) readline("Enter number of elements: ");                // Prompt user for input
$arr = [];                                                        // Store variable value
for ($i = 0; $i < $n; $i++) {                                     // Iterate through loop
    $arr[] = (int) readline("Enter element " . ($i + 1) . ": ");  // Prompt user for input
}

echo "Array elements: ";                                          // Display read and display array elements result
foreach ($arr as $x) {
    echo $x . " ";                                                // Display read and display array elements result
}
echo PHP_EOL;                                                     // Display read and display array elements result
?>
