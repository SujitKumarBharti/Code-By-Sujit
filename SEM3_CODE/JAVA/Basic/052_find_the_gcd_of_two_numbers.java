import java.util.Scanner;

class Q052_GCDTwoNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                // Initialize scanner for user input
        System.out.print("Enter two integers: ");                           // Prompt user for input
        if (sc.hasNextInt()) {                                              // Check condition
            int a = sc.nextInt();                                           // Read input from user
            int b = sc.nextInt();                                           // Read input from user
            int x = Math.abs(a), y = Math.abs(b);                           // Initialize variable
            while (y != 0) {                                                // Iterate through loop
                int temp = y;                                               // Initialize variable
                y = x % y;                                                  // Perform calculation
                x = temp;                                                   // Perform calculation
            }
            System.out.println("GCD of " + a + " and " + b + " is: " + x);  // Display find the GCD of two numbers result
        }
        sc.close();                                                         // Close scanner resource
    }
}
