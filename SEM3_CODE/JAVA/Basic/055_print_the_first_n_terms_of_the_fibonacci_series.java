import java.util.Scanner;

class Q055_FirstNTermsFibonacci {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                           // Initialize scanner for user input
        System.out.print("Enter N: ");                                 // Prompt user for input
        if (sc.hasNextInt()) {                                         // Check condition
            int n = sc.nextInt();                                      // Read input from user
            long a = 0, b = 1;                                         // Initialize variable
            System.out.print("First " + n + " terms of Fibonacci: ");  // Display print the first N terms of the F... result
            for (int i = 1; i <= n; i++) {                             // Iterate through loop
                System.out.print(a + " ");                             // Display print the first N terms of the F... result
                long next = a + b;                                     // Initialize variable
                a = b;                                                 // Perform calculation
                b = next;                                              // Perform calculation
            }
            System.out.println();                                      // Display print the first N terms of the F... result
        }
        sc.close();                                                    // Close scanner resource
    }
}
