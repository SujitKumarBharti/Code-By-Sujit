<?php
$str = "Programming with PHP";                      // Store variable value
$length = 0;                                        // Store variable value

while (isset($str[$length])) {                      // Iterate through loop
    $length++;
}

echo "String: \"$str\"" . PHP_EOL;                  // Display find the length of a string with... result
echo "Length without strlen(): $length" . PHP_EOL;  // Display find the length of a string with... result
?>
