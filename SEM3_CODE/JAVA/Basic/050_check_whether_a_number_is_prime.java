import java.util.Scanner;

class Q050_PrimeCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                             // Initialize scanner for user input
        System.out.print("Enter an integer: ");                          // Prompt user for input
        if (sc.hasNextInt()) {                                           // Check condition
            int n = sc.nextInt();                                        // Read input from user
            boolean isPrime = true;                                      // Perform calculation
            if (n <= 1) isPrime = false;                                 // Check condition
            else {
                for (int i = 2; i * i <= n; i++) {                       // Iterate through loop
                    if (n % i == 0) {                                    // Check condition
                        isPrime = false;                                 // Perform calculation
                        break;
                    }
                }
            }
            if (isPrime) System.out.println(n + " is a Prime number.");  // Display check whether a number is prime result
            else System.out.println(n + " is NOT a Prime number.");      // Display check whether a number is prime result
        }
        sc.close();                                                      // Close scanner resource
    }
}
