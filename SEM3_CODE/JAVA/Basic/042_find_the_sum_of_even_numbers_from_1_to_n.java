import java.util.Scanner;

class Q042_SumEvenNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                    // Initialize scanner for user input
        System.out.print("Enter N: ");                                          // Prompt user for input
        if (sc.hasNextInt()) {                                                  // Check condition
            int n = sc.nextInt();                                               // Read input from user
            long sum = 0;                                                       // Initialize variable
            for (int i = 2; i <= n; i += 2) sum += i;                           // Iterate through loop
            System.out.println("Sum of even numbers up to " + n + ": " + sum);  // Display find the sum of even numbers fro... result
        }
        sc.close();                                                             // Close scanner resource
    }
}
