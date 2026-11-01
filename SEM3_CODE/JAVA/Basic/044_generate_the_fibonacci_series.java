import java.util.Scanner;

class Q044_FibonacciSeries {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);          // Initialize scanner for user input
        System.out.print("Enter number of terms: ");  // Prompt user for input
        if (sc.hasNextInt()) {                        // Check condition
            int n = sc.nextInt();                     // Read input from user
            long a = 0, b = 1;                        // Initialize variable
            System.out.print("Fibonacci series: ");   // Display generate the Fibonacci series result
            for (int i = 1; i <= n; i++) {            // Iterate through loop
                System.out.print(a + " ");            // Display generate the Fibonacci series result
                long next = a + b;                    // Initialize variable
                a = b;                                // Perform calculation
                b = next;                             // Perform calculation
            }
            System.out.println();                     // Display generate the Fibonacci series result
        }
        sc.close();                                   // Close scanner resource
    }
}
