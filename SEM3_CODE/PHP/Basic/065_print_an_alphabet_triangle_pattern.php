<?php
$rows = 5;                                   // Store variable value
for ($i = 1; $i <= $rows; $i++) {            // Iterate through loop
    $ch = 'A';                               // Store variable value
    for ($j = 1; $j <= $i; $j++) {           // Iterate through loop
        echo ($ch++) . " ";                  // Display print an alphabet triangle pattern result
    }
    echo PHP_EOL;                            // Display print an alphabet triangle pattern result
}
?>
