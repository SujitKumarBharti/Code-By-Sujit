import java.util.Scanner;

class Q049_ArmstrongNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                       // Initialize scanner for user input
        System.out.print("Enter an integer: ");                                    // Prompt user for input
        if (sc.hasNextInt()) {                                                     // Check condition
            int n = sc.nextInt();                                                  // Read input from user
            if (n < 0) {                                                           // Check condition
                System.out.println(n + " is NOT an Armstrong number.");            // Display check whether a number is Armstrong result
            } else {
                int digits = String.valueOf(n).length();                           // Initialize variable
                int temp = n, sum = 0;                                             // Initialize variable
                while (temp > 0) {                                                 // Iterate through loop
                    int rem = temp % 10;                                           // Initialize variable
                    sum += Math.pow(rem, digits);                                  // Perform calculation
                    temp /= 10;                                                    // Perform calculation
                }
                if (sum == n) System.out.println(n + " is an Armstrong number.");  // Display check whether a number is Armstrong result
                else System.out.println(n + " is NOT an Armstrong number.");       // Display check whether a number is Armstrong result
            }
        }
        sc.close();                                                                // Close scanner resource
    }
}
