import java.util.Scanner;

class Q047_ReverseNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                // Initialize scanner for user input
        System.out.print("Enter an integer: ");             // Prompt user for input
        if (sc.hasNextLong()) {                             // Check condition
            long n = sc.nextLong();                         // Initialize variable
            long temp = Math.abs(n), rev = 0;               // Initialize variable
            while (temp > 0) {                              // Iterate through loop
                rev = rev * 10 + (temp % 10);               // Perform calculation
                temp /= 10;                                 // Perform calculation
            }
            if (n < 0) rev = -rev;                          // Check condition
            System.out.println("Reversed number: " + rev);  // Display reverse a number result
        }
        sc.close();                                         // Close scanner resource
    }
}
