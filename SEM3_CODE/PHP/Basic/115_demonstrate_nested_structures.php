<?php
class Address {
    public $city;
    public $state;

    public function __construct($city, $state) {
        $this->city = $city;                                       // Store variable value
        $this->state = $state;                                     // Store variable value
    }
}

class Person {
    public $name;
    public $age;
    public $address;

    public function __construct($name, $age, Address $address) {
        $this->name = $name;                                       // Store variable value
        $this->age = $age;                                         // Store variable value
        $this->address = $address;                                 // Store variable value
    }
}

$p = new Person("Sujit", 20, new Address("Ranchi", "Jharkhand"));  // Store variable value

echo "Person Details:" . PHP_EOL;                                  // Display demonstrate nested structures (n... result
echo "Name : " . $p->name . PHP_EOL;                               // Display demonstrate nested structures (n... result
echo "Age  : " . $p->age . PHP_EOL;                                // Display demonstrate nested structures (n... result
echo "City : " . $p->address->city . PHP_EOL;                      // Display demonstrate nested structures (n... result
echo "State: " . $p->address->state . PHP_EOL;                     // Display demonstrate nested structures (n... result
?>
