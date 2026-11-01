<?php
$size = 5;                                                       // Store variable value
for ($i = 1; $i <= $size; $i++) {                                // Iterate through loop
    for ($j = 1; $j <= $size; $j++) {                            // Iterate through loop
        if ($i == 1 || $i == $size || $j == 1 || $j == $size) {  // Check condition
            echo "* ";                                           // Display print a hollow square pattern result
        } else {
            echo "  ";                                           // Display print a hollow square pattern result
        }
    }
    echo PHP_EOL;                                                // Display print a hollow square pattern result
}
?>
