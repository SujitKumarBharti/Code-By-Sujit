<?php
echo "Prime numbers between 1 and 100:" . PHP_EOL;  // Display print all prime numbers between ... result

for ($n = 2; $n <= 100; $n++) {                     // Iterate through loop
    $isPrime = true;                                // Store variable value
    for ($i = 2; $i * $i <= $n; $i++) {             // Iterate through loop
        if ($n % $i == 0) {                         // Check condition
            $isPrime = false;                       // Store variable value
            break;
        }
    }
    if ($isPrime) {                                 // Check condition
        echo $n . " ";                              // Display print all prime numbers between ... result
    }
}
echo PHP_EOL;                                       // Display print all prime numbers between ... result
?>
