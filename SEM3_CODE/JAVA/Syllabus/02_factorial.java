import java.util.Scanner;

class FactorialNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);         // Instantiate new object
        System.out.print("Enter number: ");          // Prompt user to enter number
        int n = sc.hasNextInt() ? sc.nextInt() : 5;  // Read input from scanner
        long fact = 1;                               // Initialize variable
        for (int i = 1; i <= n; i++) {               // Loop through elements
            fact *= i;                               // Accumulate updated value
        }
        System.out.println("Factorial: " + fact);    // Display factorial
    }
}
