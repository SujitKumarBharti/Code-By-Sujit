import java.util.Scanner;

class Q040_MultiplicationTable {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                        // Initialize scanner for user input
        System.out.print("Enter an integer: ");                     // Prompt user for input
        if (sc.hasNextInt()) {                                      // Check condition
            int n = sc.nextInt();                                   // Read input from user
            for (int i = 1; i <= 10; i++) {                         // Iterate through loop
                System.out.printf("%d x %2d = %d\n", n, i, n * i);  // Display print the multiplication table o... result
            }
        }
        sc.close();                                                 // Close scanner resource
    }
}
