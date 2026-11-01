<?php
$rows = 5;                                   // Store variable value
$num = 1;                                    // Store variable value
for ($i = 1; $i <= $rows; $i++) {            // Iterate through loop
    for ($j = 1; $j <= $i; $j++) {           // Iterate through loop
        echo ($num++) . " ";                 // Display print Floyd's triangle result
    }
    echo PHP_EOL;                            // Display print Floyd's triangle result
}
?>
