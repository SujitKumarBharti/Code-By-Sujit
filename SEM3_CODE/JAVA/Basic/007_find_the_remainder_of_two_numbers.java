import java.util.Scanner;

class Q007_RemainderTwoNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                     // Initialize scanner for user input
        System.out.print("Enter two integers: ");                // Prompt user for input
        if (sc.hasNextInt()) {                                   // Check condition
            int a = sc.nextInt();                                // Read input from user
            int b = sc.nextInt();                                // Read input from user
            if (b != 0) {                                        // Check condition
                System.out.println("Remainder: " + (a % b));     // Display find the remainder of two numbers result
            } else {
                System.out.println("Error: Division by zero.");  // Display error message for invalid input
            }
        }
        sc.close();                                              // Close scanner resource
    }
}
