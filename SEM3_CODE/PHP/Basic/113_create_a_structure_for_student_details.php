<?php
class Student {
    public $rollNo;
    public $name;
    public $marks;

    public function __construct($rollNo, $name, $marks) {
        $this->rollNo = $rollNo;             // Store variable value
        $this->name = $name;                 // Store variable value
        $this->marks = $marks;               // Store variable value
    }
}

$s = new Student(101, "Sujit Kumar", 91.5);  // Store variable value
echo "--- Student Details ---" . PHP_EOL;    // Display create a structure for student d... result
echo "Roll No: " . $s->rollNo . PHP_EOL;     // Display create a structure for student d... result
echo "Name   : " . $s->name . PHP_EOL;       // Display create a structure for student d... result
echo "Marks  : " . $s->marks . PHP_EOL;      // Display create a structure for student d... result
?>
