<?php
class VariantData {
    private $data;

    public function setInt($val) { $this->data = (int)$val; }                         // Perform calculation
    public function setFloat($val) { $this->data = (float)$val; }                     // Perform calculation
    public function setString($val) { $this->data = (string)$val; }                   // Perform calculation

    public function get() { return $this->data; }
    public function getType() { return gettype($this->data); }
}

$var = new VariantData();                                                             // Store variable value

$var->setInt(42);
echo "Stored Int   : " . $var->get() . " (Type: " . $var->getType() . ")" . PHP_EOL;  // Display demonstrate union in C (dynamic ... result

$var->setFloat(3.14159);
echo "Stored Float : " . $var->get() . " (Type: " . $var->getType() . ")" . PHP_EOL;  // Display demonstrate union in C (dynamic ... result

$var->setString("PHP Dynamic Union");
echo "Stored String: " . $var->get() . " (Type: " . $var->getType() . ")" . PHP_EOL;  // Display demonstrate union in C (dynamic ... result
?>
