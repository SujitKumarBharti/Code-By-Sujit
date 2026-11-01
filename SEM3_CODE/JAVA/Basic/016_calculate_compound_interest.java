import java.util.Scanner;

class Q016_CompoundInterest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                            // Initialize scanner for user input
        System.out.print("Enter Principal, Rate (%), Time (years): ");  // Prompt user for input
        if (sc.hasNextDouble()) {                                       // Check condition
            double p = sc.nextDouble();                                 // Read input from user
            double r = sc.nextDouble();                                 // Read input from user
            double t = sc.nextDouble();                                 // Read input from user
            double amount = p * Math.pow((1.0 + r / 100.0), t);         // Initialize variable
            double ci = amount - p;                                     // Initialize variable
            System.out.printf("Compound Interest: %.2f\n", ci);         // Display calculate compound interest result
            System.out.printf("Total Amount     : %.2f\n", amount);     // Display calculate compound interest result
        }
        sc.close();                                                     // Close scanner resource
    }
}
