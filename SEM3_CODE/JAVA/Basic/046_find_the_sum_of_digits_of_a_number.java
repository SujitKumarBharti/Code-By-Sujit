import java.util.Scanner;

class Q046_SumOfDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);              // Initialize scanner for user input
        System.out.print("Enter an integer: ");           // Prompt user for input
        if (sc.hasNextLong()) {                           // Check condition
            long n = sc.nextLong();                       // Initialize variable
            long temp = Math.abs(n);                      // Initialize variable
            long sum = 0;                                 // Initialize variable
            while (temp > 0) {                            // Iterate through loop
                sum += (temp % 10);                       // Perform calculation
                temp /= 10;                               // Perform calculation
            }
            System.out.println("Sum of digits: " + sum);  // Display find the sum of digits of a number result
        }
        sc.close();                                       // Close scanner resource
    }
}
