import java.util.Scanner;

class Q009_SwapWithThirdVariable {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                             // Initialize scanner for user input
        System.out.print("Enter a and b: ");                             // Prompt user for input
        if (sc.hasNextInt()) {                                           // Check condition
            int a = sc.nextInt();                                        // Read input from user
            int b = sc.nextInt();                                        // Read input from user
            System.out.println("Before swap: a = " + a + ", b = " + b);  // Display swap two numbers using a third v... result
            int temp = a;                                                // Initialize variable
            a = b;                                                       // Perform calculation
            b = temp;                                                    // Perform calculation
            System.out.println("After swap : a = " + a + ", b = " + b);  // Display swap two numbers using a third v... result
        }
        sc.close();                                                      // Close scanner resource
    }
}
