<?php
$str = "Hypertext Preprocessor";                                  // Store variable value
$vowels = 0;                                                      // Store variable value
$consonants = 0;                                                  // Store variable value

for ($i = 0; $i < strlen($str); $i++) {                           // Iterate through loop
    $ch = strtolower($str[$i]);                                   // Store variable value
    if (ctype_alpha($ch)) {                                       // Check condition
        if (in_array($ch, ['a', 'e', 'i', 'o', 'u'])) $vowels++;  // Check condition
        else $consonants++;
    }
}

echo "String: \"$str\"" . PHP_EOL;                                // Display count vowels and consonants in a... result
echo "Vowels: $vowels, Consonants: $consonants" . PHP_EOL;        // Display count vowels and consonants in a... result
?>
