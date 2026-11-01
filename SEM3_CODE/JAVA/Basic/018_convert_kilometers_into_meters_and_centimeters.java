import java.util.Scanner;

class Q018_ConvertKm {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                                  // Initialize scanner for user input
        System.out.print("Enter distance in kilometers: ");                                   // Prompt user for input
        if (sc.hasNextDouble()) {                                                             // Check condition
            double km = sc.nextDouble();                                                      // Read input from user
            double meters = km * 1000.0;                                                      // Initialize variable
            double cm = km * 100000.0;                                                        // Initialize variable
            System.out.printf("%.2f km = %.2f meters = %.2f centimeters\n", km, meters, cm);  // Display convert kilometers into meters a... result
        }
        sc.close();                                                                           // Close scanner resource
    }
}
