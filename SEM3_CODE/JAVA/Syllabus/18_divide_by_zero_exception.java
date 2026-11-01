import java.util.Scanner;

class DivideByZeroException {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                        // Instantiate new object
        int a = 10;                                                                 // Initialize variable
        int b = 0;                                                                  // Initialize variable
        try {
            int result = a / b;                                                     // Initialize variable
            System.out.println("Result: " + result);                                // Display result
        } catch (ArithmeticException e) {
            System.out.println("Error: Cannot divide by zero! " + e.getMessage());  // Display error message
        }
    }
}
