<?php
$str = "hello php backend developer";        // Store variable value
$res = "";                                   // Store variable value

for ($i = 0; $i < strlen($str); $i++) {      // Iterate through loop
    $ch = $str[$i];                          // Store variable value
    if ($ch >= 'a' && $ch <= 'z') {          // Check condition
        $res .= chr(ord($ch) - 32);          // Store variable value
    } else {
        $res .= $ch;                         // Store variable value
    }
}

echo "Original : $str" . PHP_EOL;            // Display convert lowercase letters into u... result
echo "Uppercase: $res" . PHP_EOL;            // Display convert lowercase letters into u... result
?>
