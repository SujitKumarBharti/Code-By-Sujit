import java.util.Scanner;

class Q054_PowerWithoutPow {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                          // Initialize scanner for user input
        System.out.print("Enter base and integer exponent: ");        // Prompt user for input
        if (sc.hasNextDouble()) {                                     // Check condition
            double base = sc.nextDouble();                            // Read input from user
            int exp = sc.nextInt();                                   // Read input from user
            double result = 1.0;                                      // Initialize variable
            int e = Math.abs(exp);                                    // Initialize variable
            for (int i = 0; i < e; i++) result *= base;               // Iterate through loop
            if (exp < 0) result = 1.0 / result;                       // Check condition
            System.out.println(base + " ^ " + exp + " = " + result);  // Display calculate power without using pow() result
        }
        sc.close();                                                   // Close scanner resource
    }
}
