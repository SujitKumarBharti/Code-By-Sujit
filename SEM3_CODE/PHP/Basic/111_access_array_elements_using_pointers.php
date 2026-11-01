<?php
$arr = [10, 20, 30, 40, 50];                                        // Store variable value

echo "Array elements accessed via reference iteration:" . PHP_EOL;  // Display access array elements using poin... result
foreach ($arr as $index => &$val) {                                 // Perform calculation
    echo "Index $index: Value = $val" . PHP_EOL;                    // Display access array elements using poin... result
}
unset($val);                                                        // Break reference bond
?>
