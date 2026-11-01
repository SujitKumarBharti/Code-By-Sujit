import java.util.Scanner;

class Q045_CountDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                            // Initialize scanner for user input
        System.out.print("Enter an integer: ");                         // Prompt user for input
        if (sc.hasNextLong()) {                                         // Check condition
            long n = sc.nextLong();                                     // Initialize variable
            long temp = Math.abs(n);                                    // Initialize variable
            int count = (temp == 0) ? 1 : 0;                            // Initialize variable
            while (temp > 0) {                                          // Iterate through loop
                count++;
                temp /= 10;                                             // Perform calculation
            }
            System.out.println("Total digits in " + n + ": " + count);  // Display count the digits of a number result
        }
        sc.close();                                                     // Close scanner resource
    }
}
