import java.util.Scanner;

class Q011_CelsiusToFahrenheit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                              // Initialize scanner for user input
        System.out.print("Enter temperature in Celsius: ");               // Prompt user for input
        if (sc.hasNextDouble()) {                                         // Check condition
            double c = sc.nextDouble();                                   // Read input from user
            double f = (c * 9.0 / 5.0) + 32.0;                            // Initialize variable
            System.out.printf("%.2f Celsius = %.2f Fahrenheit\n", c, f);  // Display convert Celsius into Fahrenheit result
        }
        sc.close();                                                       // Close scanner resource
    }
}
