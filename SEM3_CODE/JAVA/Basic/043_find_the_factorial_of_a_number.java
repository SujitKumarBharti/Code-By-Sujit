import java.util.Scanner;

class Q043_Factorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                        // Initialize scanner for user input
        System.out.print("Enter a non-negative integer: ");                         // Prompt user for input
        if (sc.hasNextInt()) {                                                      // Check condition
            int n = sc.nextInt();                                                   // Read input from user
            if (n < 0) {                                                            // Check condition
                System.out.println("Factorial not defined for negative numbers.");  // Display find the factorial of a number result
            } else {
                long fact = 1;                                                      // Initialize variable
                for (int i = 1; i <= n; i++) fact *= i;                             // Iterate through loop
                System.out.println("Factorial of " + n + " = " + fact);             // Display find the factorial of a number result
            }
        }
        sc.close();                                                                 // Close scanner resource
    }
}
