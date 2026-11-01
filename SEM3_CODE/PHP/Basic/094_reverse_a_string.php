<?php
$str = "Antigravity";                         // Store variable value
$rev = "";                                    // Store variable value

for ($i = strlen($str) - 1; $i >= 0; $i--) {  // Iterate through loop
    $rev .= $str[$i];                         // Store variable value
}

echo "Original: $str" . PHP_EOL;              // Display reverse a string result
echo "Reversed: $rev" . PHP_EOL;              // Display reverse a string result
?>
