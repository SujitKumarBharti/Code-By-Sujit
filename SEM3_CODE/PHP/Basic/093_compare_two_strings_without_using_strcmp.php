<?php
$s1 = "Hello";                                                        // Store variable value
$s2 = "Hello";                                                        // Store variable value

$i = 0;                                                               // Store variable value
$equal = true;                                                        // Store variable value

while (isset($s1[$i]) || isset($s2[$i])) {                            // Iterate through loop
    if (!isset($s1[$i]) || !isset($s2[$i]) || $s1[$i] !== $s2[$i]) {  // Check condition
        $equal = false;                                               // Store variable value
        break;
    }
    $i++;
}

if ($equal) echo "\"$s1\" and \"$s2\" are EQUAL." . PHP_EOL;          // Display compare two strings without usin... result
else echo "\"$s1\" and \"$s2\" are NOT equal." . PHP_EOL;             // Display compare two strings without usin... result
?>
