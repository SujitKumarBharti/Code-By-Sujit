<?php
$rows = 5;                                          // Store variable value
for ($i = 0; $i < $rows; $i++) {                    // Iterate through loop
    $val = 1;                                       // Store variable value
    for ($s = 1; $s <= $rows - $i; $s++) echo " ";  // Display print Pascal's triangle result
    for ($j = 0; $j <= $i; $j++) {                  // Iterate through loop
        echo $val . " ";                            // Display print Pascal's triangle result
        $val = (int)($val * ($i - $j) / ($j + 1));  // Store variable value
    }
    echo PHP_EOL;                                   // Display print Pascal's triangle result
}
?>
