import java.util.Scanner;

class Q024_LargestOfThree {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                   // Initialize scanner for user input
        System.out.print("Enter three numbers: ");             // Prompt user for input
        if (sc.hasNextDouble()) {                              // Check condition
            double a = sc.nextDouble();                        // Read input from user
            double b = sc.nextDouble();                        // Read input from user
            double c = sc.nextDouble();                        // Read input from user
            double largest = Math.max(a, Math.max(b, c));      // Initialize variable
            System.out.println("Largest number: " + largest);  // Display find the largest of three numbers result
        }
        sc.close();                                            // Close scanner resource
    }
}
