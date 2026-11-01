<?php
$strings = ["Banana", "Apple", "Mango", "Cherry", "Date"];  // Store variable value
echo "Original list:" . PHP_EOL;                            // Display sort strings alphabetically result
foreach ($strings as $s) echo "  $s" . PHP_EOL;             // Display sort strings alphabetically result

sort($strings);

echo "Sorted list:" . PHP_EOL;                              // Display sort strings alphabetically result
foreach ($strings as $s) echo "  $s" . PHP_EOL;             // Display sort strings alphabetically result
?>
