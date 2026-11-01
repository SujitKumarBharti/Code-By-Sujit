<?php
$char = readline("Enter a character: ");                                      // Prompt user for input
if (strlen($char) > 0) {                                                      // Check condition
    echo "ASCII value of '" . $char[0] . "' is: " . ord($char[0]) . PHP_EOL;  // Display find the ASCII value of a character result
}
?>
