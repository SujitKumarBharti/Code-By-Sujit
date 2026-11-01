import java.util.Scanner;

class Q035_QuadraticRoots {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                            // Initialize scanner for user input
        System.out.print("Enter a, b, c (ax^2 + bx + c = 0): ");                        // Prompt user for input
        if (sc.hasNextDouble()) {                                                       // Check condition
            double a = sc.nextDouble();                                                 // Read input from user
            double b = sc.nextDouble();                                                 // Read input from user
            double c = sc.nextDouble();                                                 // Read input from user
            if (a == 0) {                                                               // Check condition
                System.out.println("Not quadratic (a cannot be zero).");                // Display find the roots of a quadratic eq... result
                sc.close();                                                             // Close scanner resource
                return;
            }
            double disc = b * b - 4 * a * c;                                            // Initialize variable
            if (disc > 0) {                                                             // Check condition
                double r1 = (-b + Math.sqrt(disc)) / (2 * a);                           // Initialize variable
                double r2 = (-b - Math.sqrt(disc)) / (2 * a);                           // Initialize variable
                System.out.printf("Real and distinct roots: %.2f and %.2f\n", r1, r2);  // Display find the roots of a quadratic eq... result
            } else if (disc == 0) {                                                     // Check condition
                double r = -b / (2 * a);                                                // Initialize variable
                System.out.printf("Real and equal root: %.2f\n", r);                    // Display find the roots of a quadratic eq... result
            } else {
                double realPart = -b / (2 * a);                                         // Initialize variable
                double imagPart = Math.sqrt(-disc) / (2 * a);                           // Initialize variable
                System.out.printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n",     // Display find the roots of a quadratic eq... result
                                  realPart, imagPart, realPart, imagPart);
            }
        }
        sc.close();                                                                     // Close scanner resource
    }
}
