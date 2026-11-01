import java.util.Scanner;

class Q015_SimpleInterest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                            // Initialize scanner for user input
        System.out.print("Enter Principal, Rate (%), Time (years): ");  // Prompt user for input
        if (sc.hasNextDouble()) {                                       // Check condition
            double p = sc.nextDouble();                                 // Read input from user
            double r = sc.nextDouble();                                 // Read input from user
            double t = sc.nextDouble();                                 // Read input from user
            double si = (p * r * t) / 100.0;                            // Initialize variable
            System.out.printf("Simple Interest: %.2f\n", si);           // Display calculate simple interest result
        }
        sc.close();                                                     // Close scanner resource
    }
}
