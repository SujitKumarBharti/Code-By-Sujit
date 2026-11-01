<?php
$src = "PHP Antigravity";                    // Store variable value
$dest = "";                                  // Store variable value

for ($i = 0; isset($src[$i]); $i++) {        // Iterate through loop
    $dest .= $src[$i];                       // Store variable value
}

echo "Source: $src" . PHP_EOL;               // Display copy a string without using strc... result
echo "Copied: $dest" . PHP_EOL;              // Display copy a string without using strc... result
?>
