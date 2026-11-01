<?php
class Student {
    public $rollNo;
    public $name;
    public $marks;

    public function __construct($rollNo, $name, $marks) {
        $this->rollNo = $rollNo;                                                // Store variable value
        $this->name = $name;                                                    // Store variable value
        $this->marks = $marks;                                                  // Store variable value
    }
}

$students = [                                                                   // Store variable value
    new Student(1, "Aakash", 88.0),
    new Student(2, "Bhavna", 92.5),
    new Student(3, "Chetan", 79.0)
];

echo "--- Student Records ---" . PHP_EOL;                                       // Display store and display details of mul... result
foreach ($students as $s) {
    echo "Roll: {$s->rollNo}, Name: {$s->name}, Marks: {$s->marks}" . PHP_EOL;  // Display store and display details of mul... result
}
?>
