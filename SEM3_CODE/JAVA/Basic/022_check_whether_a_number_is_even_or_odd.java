import java.util.Scanner;

class Q022_EvenOrOdd {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                      // Initialize scanner for user input
        System.out.print("Enter an integer: ");                   // Prompt user for input
        if (sc.hasNextInt()) {                                    // Check condition
            int n = sc.nextInt();                                 // Read input from user
            if (n % 2 == 0) System.out.println(n + " is Even.");  // Display check whether a number is even o... result
            else System.out.println(n + " is Odd.");              // Display check whether a number is even o... result
        }
        sc.close();                                               // Close scanner resource
    }
}
