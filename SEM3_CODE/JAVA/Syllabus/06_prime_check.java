import java.util.Scanner;

class PrimeCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);          // Instantiate new object
        System.out.print("Enter number: ");           // Prompt user to enter number
        int n = sc.hasNextInt() ? sc.nextInt() : 17;  // Read input from scanner
        boolean isPrime = n > 1;                      // Calculate and assign value
        for (int i = 2; i * i <= n; i++) {            // Loop through elements
            if (n % i == 0) {                         // Check if value equals zero
                isPrime = false;                      // Calculate and assign value
                break;                                // Exit loop or switch block
            }
        }
        System.out.println("Is prime: " + isPrime);   // Display is prime
    }
}
