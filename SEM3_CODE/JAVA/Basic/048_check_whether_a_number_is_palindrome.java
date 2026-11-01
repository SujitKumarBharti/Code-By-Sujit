import java.util.Scanner;

class Q048_PalindromeNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                // Initialize scanner for user input
        System.out.print("Enter an integer: ");                             // Prompt user for input
        if (sc.hasNextLong()) {                                             // Check condition
            long n = sc.nextLong();                                         // Initialize variable
            if (n < 0) {                                                    // Check condition
                System.out.println(n + " is NOT a Palindrome.");            // Display check whether a number is palind... result
            } else {
                long temp = n, rev = 0;                                     // Initialize variable
                while (temp > 0) {                                          // Iterate through loop
                    rev = rev * 10 + (temp % 10);                           // Perform calculation
                    temp /= 10;                                             // Perform calculation
                }
                if (rev == n) System.out.println(n + " is a Palindrome.");  // Display check whether a number is palind... result
                else System.out.println(n + " is NOT a Palindrome.");       // Display check whether a number is palind... result
            }
        }
        sc.close();                                                         // Close scanner resource
    }
}
