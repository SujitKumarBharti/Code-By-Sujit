import java.util.Scanner;

class Q017_ConvertDays {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                                                   // Initialize scanner for user input
        System.out.print("Enter total days: ");                                                                // Prompt user for input
        if (sc.hasNextInt()) {                                                                                 // Check condition
            int totalDays = sc.nextInt();                                                                      // Read input from user
            int years = totalDays / 365;                                                                       // Initialize variable
            int weeks = (totalDays % 365) / 7;                                                                 // Initialize variable
            int days = (totalDays % 365) % 7;                                                                  // Initialize variable
            System.out.printf("%d days = %d years, %d weeks, and %d days.\n", totalDays, years, weeks, days);  // Display convert days into years, weeks, ... result
        }
        sc.close();                                                                                            // Close scanner resource
    }
}
