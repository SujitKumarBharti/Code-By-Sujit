<?php
$totalDays = (int) readline("Enter total days: ");                               // Prompt user for input

$years = (int)($totalDays / 365);                                                // Store variable value
$weeks = (int)(($totalDays % 365) / 7);                                          // Store variable value
$days = ($totalDays % 365) % 7;                                                  // Store variable value

echo "$totalDays days = $years years, $weeks weeks, and $days days." . PHP_EOL;  // Display convert days into years, weeks, ... result
?>
