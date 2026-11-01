<?php
$filename = "php_output.txt";                // Store variable value

if (!file_exists($filename)) {               // Check condition
    file_put_contents($filename, "Sample line for PHP file reading.\n");
}

$file = fopen($filename, "r");               // Store variable value
echo "Reading from $filename:" . PHP_EOL;    // Display read data from a file result

while (($line = fgets($file)) !== false) {   // Iterate through loop
    echo $line;                              // Display read data from a file result
}

fclose($file);
?>
