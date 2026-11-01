<?php
$filename = "php_output.txt";                                             // Store variable value

if (!file_exists($filename)) {                                            // Check condition
    echo "File $filename not found. Run write program first." . PHP_EOL;  // Display count characters, words, and lin... result
    exit(1);
}

$content = file_get_contents($filename);                                  // Store variable value
$characters = strlen($content);                                           // Store variable value
$words = str_word_count($content);                                        // Store variable value
$lines = substr_count($content, "\n");                                    // Store variable value

echo "File Statistics for $filename:" . PHP_EOL;                          // Display count characters, words, and lin... result
echo "Characters : $characters" . PHP_EOL;                                // Display count characters, words, and lin... result
echo "Words      : $words" . PHP_EOL;                                     // Display count characters, words, and lin... result
echo "Lines      : $lines" . PHP_EOL;                                     // Display count characters, words, and lin... result
?>
