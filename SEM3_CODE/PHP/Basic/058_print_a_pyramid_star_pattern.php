<?php
$rows = 5;                                   // Store variable value
for ($i = 1; $i <= $rows; $i++) {            // Iterate through loop
    for ($j = 1; $j <= $rows - $i; $j++) {   // Iterate through loop
        echo " ";                            // Display print a pyramid star pattern result
    }
    for ($k = 1; $k <= 2 * $i - 1; $k++) {   // Iterate through loop
        echo "*";                            // Display print a pyramid star pattern result
    }
    echo PHP_EOL;                            // Display print a pyramid star pattern result
}
?>
