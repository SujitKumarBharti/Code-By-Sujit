import java.util.Scanner;

class Q021_PositiveNegativeZero {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                          // Initialize scanner for user input
        System.out.print("Enter a number: ");                         // Prompt user for input
        if (sc.hasNextDouble()) {                                     // Check condition
            double n = sc.nextDouble();                               // Read input from user
            if (n > 0) System.out.println(n + " is Positive.");       // Display check whether a number is positi... result
            else if (n < 0) System.out.println(n + " is Negative.");  // Display check whether a number is positi... result
            else System.out.println("The number is Zero.");           // Display check whether a number is positi... result
        }
        sc.close();                                                   // Close scanner resource
    }
}
