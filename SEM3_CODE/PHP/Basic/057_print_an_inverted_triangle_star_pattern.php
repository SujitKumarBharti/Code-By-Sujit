<?php
$rows = 5;                                   // Store variable value
for ($i = $rows; $i >= 1; $i--) {            // Iterate through loop
    for ($j = 1; $j <= $i; $j++) {           // Iterate through loop
        echo "* ";                           // Display print an inverted triangle star ... result
    }
    echo PHP_EOL;                            // Display print an inverted triangle star ... result
}
?>
