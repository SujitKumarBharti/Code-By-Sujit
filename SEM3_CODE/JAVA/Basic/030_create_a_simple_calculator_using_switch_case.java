import java.util.Scanner;

class Q030_SimpleCalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                       // Initialize scanner for user input
        System.out.print("Enter operator (+, -, *, /): ");                         // Prompt user for input
        char op = sc.next().charAt(0);                                             // Read input from user
        System.out.print("Enter two numbers: ");                                   // Prompt user for input
        double a = sc.nextDouble();                                                // Read input from user
        double b = sc.nextDouble();                                                // Read input from user

        switch (op) {
            case '+': System.out.println(a + " + " + b + " = " + (a + b)); break;  // Display create a simple calculator using... result
            case '-': System.out.println(a + " - " + b + " = " + (a - b)); break;  // Display create a simple calculator using... result
            case '*': System.out.println(a + " * " + b + " = " + (a * b)); break;  // Display create a simple calculator using... result
            case '/':
                if (b != 0) System.out.println(a + " / " + b + " = " + (a / b));   // Display create a simple calculator using... result
                else System.out.println("Error: Division by zero!");               // Display error message for invalid input
                break;
            default: System.out.println("Error: Invalid operator!"); break;        // Display error message for invalid input
        }
        sc.close();                                                                // Close scanner resource
    }
}
