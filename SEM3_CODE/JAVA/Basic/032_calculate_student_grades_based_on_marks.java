import java.util.Scanner;

class Q032_StudentGrade {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                           // Initialize scanner for user input
        System.out.print("Enter marks (0-100): ");                     // Prompt user for input
        if (sc.hasNextDouble()) {                                      // Check condition
            double m = sc.nextDouble();                                // Read input from user
            if (m >= 90 && m <= 100) System.out.println("Grade: A+");  // Display calculate student grades based o... result
            else if (m >= 80) System.out.println("Grade: A");          // Display calculate student grades based o... result
            else if (m >= 70) System.out.println("Grade: B");          // Display calculate student grades based o... result
            else if (m >= 60) System.out.println("Grade: C");          // Display calculate student grades based o... result
            else if (m >= 50) System.out.println("Grade: D");          // Display calculate student grades based o... result
            else if (m >= 0) System.out.println("Grade: F (Fail)");    // Display calculate student grades based o... result
            else System.out.println("Invalid marks entered.");         // Display error message for invalid input
        }
        sc.close();                                                    // Close scanner resource
    }
}
