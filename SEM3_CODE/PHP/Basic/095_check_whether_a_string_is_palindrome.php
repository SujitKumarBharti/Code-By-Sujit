<?php
$str = "racecar";                                        // Store variable value
$len = strlen($str);                                     // Store variable value
$isPal = true;                                           // Store variable value

for ($i = 0, $j = $len - 1; $i < $j; $i++, $j--) {       // Iterate through loop
    if ($str[$i] !== $str[$j]) {                         // Check condition
        $isPal = false;                                  // Store variable value
        break;
    }
}

if ($isPal) echo "\"$str\" is a Palindrome." . PHP_EOL;  // Display check whether a string is palind... result
else echo "\"$str\" is NOT a Palindrome." . PHP_EOL;     // Display check whether a string is palind... result
?>
