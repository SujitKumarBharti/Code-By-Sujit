import java.util.Scanner;

class Q014_AreaOfTriangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                      // Initialize scanner for user input
        System.out.print("Enter base and height: ");              // Prompt user for input
        if (sc.hasNextDouble()) {                                 // Check condition
            double base = sc.nextDouble();                        // Read input from user
            double height = sc.nextDouble();                      // Read input from user
            double area = 0.5 * base * height;                    // Initialize variable
            System.out.printf("Area of Triangle: %.2f\n", area);  // Display calculate the area of a triangle result
        }
        sc.close();                                               // Close scanner resource
    }
}
