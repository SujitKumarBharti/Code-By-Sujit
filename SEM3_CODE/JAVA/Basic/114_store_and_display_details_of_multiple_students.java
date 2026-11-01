class Q114_MultipleStudents {
    static class Student {
        int rollNo;                                                                                 // Declare variables for calculation
        String name;
        double marks;                                                                               // Declare variables for calculation

        Student(int r, String n, double m) {
            this.rollNo = r;                                                                        // Perform calculation
            this.name = n;                                                                          // Perform calculation
            this.marks = m;                                                                         // Perform calculation
        }
    }

    public static void main(String[] args) {
        Student[] list = {                                                                          // Perform calculation
            new Student(1, "Aarav", 87.5),
            new Student(2, "Bina", 91.0),
            new Student(3, "Chandan", 84.5)
        };

        System.out.println("--- Student Directory ---");                                            // Display store and display details of mul... result
        for (Student s : list) {                                                                    // Iterate through loop
            System.out.println("Roll: " + s.rollNo + ", Name: " + s.name + ", Marks: " + s.marks);  // Display store and display details of mul... result
        }
    }
}
