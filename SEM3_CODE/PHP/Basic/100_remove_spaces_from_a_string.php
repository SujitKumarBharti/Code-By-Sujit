<?php
$str = "P H P   W o r k s p a c e";          // Store variable value
$res = "";                                   // Store variable value

for ($i = 0; $i < strlen($str); $i++) {      // Iterate through loop
    if ($str[$i] !== ' ') {                  // Check condition
        $res .= $str[$i];                    // Store variable value
    }
}

echo "Before: \"$str\"" . PHP_EOL;           // Display remove spaces from a string result
echo "After : \"$res\"" . PHP_EOL;           // Display remove spaces from a string result
?>
