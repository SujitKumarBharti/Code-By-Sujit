import java.util.Scanner;

class Q008_AverageThreeNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);            // Initialize scanner for user input
        System.out.print("Enter three numbers: ");      // Prompt user for input
        if (sc.hasNextDouble()) {                       // Check condition
            double a = sc.nextDouble();                 // Read input from user
            double b = sc.nextDouble();                 // Read input from user
            double c = sc.nextDouble();                 // Read input from user
            double avg = (a + b + c) / 3.0;             // Initialize variable
            System.out.printf("Average: %.2f\n", avg);  // Display calculate the average of three n... result
        }
        sc.close();                                     // Close scanner resource
    }
}
