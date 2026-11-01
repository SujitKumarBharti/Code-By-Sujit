import java.util.Scanner;

class Q010_SwapWithoutThirdVariable {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                             // Initialize scanner for user input
        System.out.print("Enter a and b: ");                             // Prompt user for input
        if (sc.hasNextInt()) {                                           // Check condition
            int a = sc.nextInt();                                        // Read input from user
            int b = sc.nextInt();                                        // Read input from user
            System.out.println("Before swap: a = " + a + ", b = " + b);  // Display swap two numbers without using a... result
            a = a + b;                                                   // Perform calculation
            b = a - b;                                                   // Perform calculation
            a = a - b;                                                   // Perform calculation
            System.out.println("After swap : a = " + a + ", b = " + b);  // Display swap two numbers without using a... result
        }
        sc.close();                                                      // Close scanner resource
    }
}
