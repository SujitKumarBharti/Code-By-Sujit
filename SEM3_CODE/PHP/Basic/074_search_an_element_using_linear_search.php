<?php
$arr = [15, 23, 7, 42, 19, 8];                           // Store variable value
$key = 42;                                               // Store variable value
$pos = -1;                                               // Store variable value

for ($i = 0; $i < count($arr); $i++) {                   // Iterate through loop
    if ($arr[$i] == $key) {                              // Check condition
        $pos = $i;                                       // Store variable value
        break;
    }
}

if ($pos != -1) {                                        // Check condition
    echo "Element $key found at index $pos." . PHP_EOL;  // Display search an element using Linear S... result
} else {
    echo "Element $key not found in array." . PHP_EOL;   // Display search an element using Linear S... result
}
?>
