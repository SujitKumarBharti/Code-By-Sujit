<?php
$value = 100;                                                      // Store variable value
$ref = &$value;                                                    // $ref points to the same memory slot as $value

echo "Original value: $value" . PHP_EOL;                           // Display demonstrate pointer declaration ... result
echo "Reference value: $ref" . PHP_EOL;                            // Display demonstrate pointer declaration ... result

$ref = 250;                                                        // Modifying through reference
echo "Value after modifying through reference: $value" . PHP_EOL;  // Display demonstrate pointer declaration ... result
?>
