import java.util.Scanner;

class Q025_SmallestOfThree {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                     // Initialize scanner for user input
        System.out.print("Enter three numbers: ");               // Prompt user for input
        if (sc.hasNextDouble()) {                                // Check condition
            double a = sc.nextDouble();                          // Read input from user
            double b = sc.nextDouble();                          // Read input from user
            double c = sc.nextDouble();                          // Read input from user
            double smallest = Math.min(a, Math.min(b, c));       // Initialize variable
            System.out.println("Smallest number: " + smallest);  // Display find the smallest of three numbers result
        }
        sc.close();                                              // Close scanner resource
    }
}
