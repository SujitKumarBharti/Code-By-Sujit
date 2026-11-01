<?php
$filename = "php_output.txt";                              // Store variable value
$file = fopen($filename, "w");                             // Store variable value

if (!$file) {                                              // Check condition
    echo "Error opening file for writing!" . PHP_EOL;      // Display error message for invalid input
    exit(1);
}

fwrite($file, "Hello, this is output from PHP file handling.\n");
fwrite($file, "PHP makes working with files fast and intuitive.\n");
fclose($file);

echo "Data successfully written to $filename." . PHP_EOL;  // Display write data into a file result
?>
