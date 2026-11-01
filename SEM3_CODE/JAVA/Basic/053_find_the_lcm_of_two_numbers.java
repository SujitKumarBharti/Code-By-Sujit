import java.util.Scanner;

class Q053_LCMTwoNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                  // Initialize scanner for user input
        System.out.print("Enter two integers: ");                             // Prompt user for input
        if (sc.hasNextInt()) {                                                // Check condition
            int a = sc.nextInt();                                             // Read input from user
            int b = sc.nextInt();                                             // Read input from user
            int x = Math.abs(a), y = Math.abs(b);                             // Initialize variable
            while (y != 0) {                                                  // Iterate through loop
                int temp = y;                                                 // Initialize variable
                y = x % y;                                                    // Perform calculation
                x = temp;                                                     // Perform calculation
            }
            int gcd = x;                                                      // Initialize variable
            int lcm = (gcd != 0) ? Math.abs(a * b) / gcd : 0;                 // Initialize variable
            System.out.println("LCM of " + a + " and " + b + " is: " + lcm);  // Display find the LCM of two numbers result
        }
        sc.close();                                                           // Close scanner resource
    }
}
