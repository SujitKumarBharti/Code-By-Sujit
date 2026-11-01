<?php
$arr = [4, 2, 7, 2, 8, 4, 3, 1];                               // Store variable value
sort($arr);

echo "Duplicate elements: ";                                   // Display find duplicate elements using so... result
$found = false;                                                // Store variable value
$n = count($arr);                                              // Store variable value
for ($i = 0; $i < $n - 1; $i++) {                              // Iterate through loop
    if ($arr[$i] == $arr[$i + 1]) {                            // Check condition
        echo $arr[$i] . " ";                                   // Display find duplicate elements using so... result
        $found = true;                                         // Store variable value
        while ($i < $n - 1 && $arr[$i] == $arr[$i + 1]) $i++;  // Iterate through loop
    }
}
if (!$found) echo "None";                                      // Display find duplicate elements using so... result
echo PHP_EOL;                                                  // Display find duplicate elements using so... result
?>
