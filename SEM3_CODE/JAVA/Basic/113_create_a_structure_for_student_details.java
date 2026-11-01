class Q113_StudentStructure {
    static class Student {
        int rollNo;                                         // Declare variables for calculation
        String name;
        double marks;                                       // Declare variables for calculation

        Student(int r, String n, double m) {
            this.rollNo = r;                                // Perform calculation
            this.name = n;                                  // Perform calculation
            this.marks = m;                                 // Perform calculation
        }

        void display() {
            System.out.println("Roll No: " + rollNo);       // Display create a structure for student d... result
            System.out.println("Name   : " + name);         // Display create a structure for student d... result
            System.out.println("Marks  : " + marks);        // Display create a structure for student d... result
        }
    }

    public static void main(String[] args) {
        Student s = new Student(101, "Sujit Kumar", 95.5);  // Perform calculation
        System.out.println("--- Student Details ---");      // Display create a structure for student d... result
        s.display();
    }
}
