import java.util.Scanner;

class Q033_ValidTriangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                      // Initialize scanner for user input
        System.out.print("Enter three angles: ");                 // Prompt user for input
        if (sc.hasNextDouble()) {                                 // Check condition
            double a = sc.nextDouble();                           // Read input from user
            double b = sc.nextDouble();                           // Read input from user
            double c = sc.nextDouble();                           // Read input from user
            if (a > 0 && b > 0 && c > 0 && (a + b + c == 180.0))  // Check condition
                System.out.println("The triangle is VALID.");     // Display check whether a triangle is valid result
            else
                System.out.println("The triangle is INVALID.");   // Display error message for invalid input
        }
        sc.close();                                               // Close scanner resource
    }
}
