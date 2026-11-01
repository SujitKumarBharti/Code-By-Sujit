import java.util.Scanner;

class Q012_AreaOfCircle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                    // Initialize scanner for user input
        System.out.print("Enter radius: ");                     // Prompt user for input
        if (sc.hasNextDouble()) {                               // Check condition
            double r = sc.nextDouble();                         // Read input from user
            double area = Math.PI * r * r;                      // Initialize variable
            System.out.printf("Area of Circle: %.2f\n", area);  // Display calculate the area of a circle result
        }
        sc.close();                                             // Close scanner resource
    }
}
