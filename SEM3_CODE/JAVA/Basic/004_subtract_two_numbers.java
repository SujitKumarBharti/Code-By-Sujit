import java.util.Scanner;

class Q004_SubtractTwoNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);               // Initialize scanner for user input
        System.out.print("Enter two numbers: ");           // Prompt user for input
        if (sc.hasNextInt()) {                             // Check condition
            int a = sc.nextInt();                          // Read input from user
            int b = sc.nextInt();                          // Read input from user
            System.out.println("Difference: " + (a - b));  // Display subtract two numbers result
        }
        sc.close();                                        // Close scanner resource
    }
}
