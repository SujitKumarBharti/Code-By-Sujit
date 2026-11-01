import java.util.Scanner;

class Q003_AddTwoNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);        // Initialize scanner for user input
        System.out.print("Enter two numbers: ");    // Prompt user for input
        if (sc.hasNextInt()) {                      // Check condition
            int a = sc.nextInt();                   // Read input from user
            int b = sc.nextInt();                   // Read input from user
            System.out.println("Sum: " + (a + b));  // Display add two numbers result
        }
        sc.close();                                 // Close scanner resource
    }
}
