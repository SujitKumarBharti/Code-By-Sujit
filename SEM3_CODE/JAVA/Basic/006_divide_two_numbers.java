import java.util.Scanner;

class Q006_DivideTwoNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                     // Initialize scanner for user input
        System.out.print("Enter dividend and divisor: ");        // Prompt user for input
        if (sc.hasNextDouble()) {                                // Check condition
            double a = sc.nextDouble();                          // Read input from user
            double b = sc.nextDouble();                          // Read input from user
            if (b != 0) {                                        // Check condition
                System.out.println("Quotient: " + (a / b));      // Display divide two numbers result
            } else {
                System.out.println("Error: Division by zero.");  // Display error message for invalid input
            }
        }
        sc.close();                                              // Close scanner resource
    }
}
