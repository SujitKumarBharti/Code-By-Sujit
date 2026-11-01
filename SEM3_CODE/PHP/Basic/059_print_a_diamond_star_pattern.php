<?php
$n = 5;                                             // Store variable value
for ($i = 1; $i <= $n; $i++) {                      // Iterate through loop
    for ($j = 1; $j <= $n - $i; $j++) echo " ";     // Display print a diamond star pattern result
    for ($k = 1; $k <= 2 * $i - 1; $k++) echo "*";  // Display print a diamond star pattern result
    echo PHP_EOL;                                   // Display print a diamond star pattern result
}
for ($i = $n - 1; $i >= 1; $i--) {                  // Iterate through loop
    for ($j = 1; $j <= $n - $i; $j++) echo " ";     // Display print a diamond star pattern result
    for ($k = 1; $k <= 2 * $i - 1; $k++) echo "*";  // Display print a diamond star pattern result
    echo PHP_EOL;                                   // Display print a diamond star pattern result
}
?>
