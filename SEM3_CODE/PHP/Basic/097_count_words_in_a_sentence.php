<?php
$sentence = "PHP powers a massive portion of the web";  // Store variable value
$words = 0;                                             // Store variable value
$inWord = false;                                        // Store variable value

for ($i = 0; $i < strlen($sentence); $i++) {            // Iterate through loop
    $ch = $sentence[$i];                                // Store variable value
    if ($ch !== ' ' && $ch !== "\t" && $ch !== "\n") {  // Check condition
        if (!$inWord) {                                 // Check condition
            $words++;
            $inWord = true;                             // Store variable value
        }
    } else {
        $inWord = false;                                // Store variable value
    }
}

echo "Sentence: \"$sentence\"" . PHP_EOL;               // Display count words in a sentence result
echo "Word count: $words" . PHP_EOL;                    // Display count words in a sentence result
?>
