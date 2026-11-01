import java.util.Scanner;

class Q029_DivisibleBy5And11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                    // Initialize scanner for user input
        System.out.print("Enter an integer: ");                                 // Prompt user for input
        if (sc.hasNextInt()) {                                                  // Check condition
            int n = sc.nextInt();                                               // Read input from user
            if (n % 5 == 0 && n % 11 == 0)                                      // Check condition
                System.out.println(n + " is divisible by both 5 and 11.");      // Display check whether a number is divisi... result
            else
                System.out.println(n + " is NOT divisible by both 5 and 11.");  // Display check whether a number is divisi... result
        }
        sc.close();                                                             // Close scanner resource
    }
}
