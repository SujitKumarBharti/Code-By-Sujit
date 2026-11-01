<?php
$input = readline("Enter an alphabet character: ");                  // Prompt user for input
if (strlen($input) > 0) {                                            // Check condition
    $ch = strtolower($input[0]);                                     // Store variable value
    if (ctype_alpha($ch)) {                                          // Check condition
        if (in_array($ch, ['a', 'e', 'i', 'o', 'u'])) {              // Check condition
            echo "'$input[0]' is a Vowel." . PHP_EOL;                // Display check whether a character is a v... result
        } else {
            echo "'$input[0]' is a Consonant." . PHP_EOL;            // Display check whether a character is a v... result
        }
    } else {
        echo "'$input[0]' is not an alphabet character." . PHP_EOL;  // Display check whether a character is a v... result
    }
}
?>
