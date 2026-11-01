<?php
$str = "programming";                        // Store variable value
$freq = [];                                  // Store variable value

for ($i = 0; $i < strlen($str); $i++) {      // Iterate through loop
    $c = $str[$i];                           // Store variable value
    if (!isset($freq[$c])) $freq[$c] = 0;    // Check condition
    $freq[$c]++;
}

echo "String: \"$str\"" . PHP_EOL;           // Display count the frequency of each char... result
echo "Character frequencies:" . PHP_EOL;     // Display count the frequency of each char... result
foreach ($freq as $ch => $count) {           // Perform calculation
    echo "  '$ch' : $count" . PHP_EOL;       // Display count the frequency of each char... result
}
?>
