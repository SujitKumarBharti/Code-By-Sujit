<?php
$filename = "php_output.txt";                               // Store variable value
$file = fopen($filename, "a");                              // Store variable value

if (!$file) {                                               // Check condition
    echo "Error opening file for appending!" . PHP_EOL;     // Display error message for invalid input
    exit(1);
}

fwrite($file, "Appended line from PHP script.\n");
fclose($file);

echo "Data successfully appended to $filename." . PHP_EOL;  // Display append data to a file result
?>
