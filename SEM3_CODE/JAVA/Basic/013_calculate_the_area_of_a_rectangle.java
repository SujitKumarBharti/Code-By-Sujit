import java.util.Scanner;

class Q013_AreaOfRectangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                       // Initialize scanner for user input
        System.out.print("Enter length and width: ");              // Prompt user for input
        if (sc.hasNextDouble()) {                                  // Check condition
            double l = sc.nextDouble();                            // Read input from user
            double w = sc.nextDouble();                            // Read input from user
            double area = l * w;                                   // Initialize variable
            System.out.printf("Area of Rectangle: %.2f\n", area);  // Display calculate the area of a rectangle result
        }
        sc.close();                                                // Close scanner resource
    }
}
