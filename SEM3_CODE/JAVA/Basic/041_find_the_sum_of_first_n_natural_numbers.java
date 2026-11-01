import java.util.Scanner;

class Q041_SumFirstNNatural {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                       // Initialize scanner for user input
        System.out.print("Enter N: ");                                             // Prompt user for input
        if (sc.hasNextInt()) {                                                     // Check condition
            int n = sc.nextInt();                                                  // Read input from user
            long sum = 0;                                                          // Initialize variable
            for (int i = 1; i <= n; i++) sum += i;                                 // Iterate through loop
            System.out.println("Sum of first " + n + " natural numbers: " + sum);  // Display find the sum of first N natural ... result
        }
        sc.close();                                                                // Close scanner resource
    }
}
