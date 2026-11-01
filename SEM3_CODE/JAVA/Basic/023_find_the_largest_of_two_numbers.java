import java.util.Scanner;

class Q023_LargestOfTwo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                 // Initialize scanner for user input
        System.out.print("Enter two numbers: ");                             // Prompt user for input
        if (sc.hasNextDouble()) {                                            // Check condition
            double a = sc.nextDouble();                                      // Read input from user
            double b = sc.nextDouble();                                      // Read input from user
            if (a > b) System.out.println(a + " is larger than " + b);       // Display find the largest of two numbers result
            else if (b > a) System.out.println(b + " is larger than " + a);  // Display find the largest of two numbers result
            else System.out.println("Both numbers are equal (" + a + ").");  // Display find the largest of two numbers result
        }
        sc.close();                                                          // Close scanner resource
    }
}
