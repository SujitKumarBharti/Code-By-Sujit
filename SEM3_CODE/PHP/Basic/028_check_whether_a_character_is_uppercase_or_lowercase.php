<?php
$input = readline("Enter a character: ");                      // Prompt user for input
if (strlen($input) > 0) {                                      // Check condition
    $ch = $input[0];                                           // Store variable value
    if (ctype_upper($ch)) {                                    // Check condition
        echo "'$ch' is an Uppercase letter." . PHP_EOL;        // Display check whether a character is upp... result
    } elseif (ctype_lower($ch)) {
        echo "'$ch' is a Lowercase letter." . PHP_EOL;         // Display check whether a character is upp... result
    } else {
        echo "'$ch' is not an alphabet character." . PHP_EOL;  // Display check whether a character is upp... result
    }
}
?>
