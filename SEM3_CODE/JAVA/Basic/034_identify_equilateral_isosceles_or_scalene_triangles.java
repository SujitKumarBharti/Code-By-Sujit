import java.util.Scanner;

class Q034_TriangleTypes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                                          // Initialize scanner for user input
        System.out.print("Enter three sides: ");                                                      // Prompt user for input
        if (sc.hasNextDouble()) {                                                                     // Check condition
            double s1 = sc.nextDouble();                                                              // Read input from user
            double s2 = sc.nextDouble();                                                              // Read input from user
            double s3 = sc.nextDouble();                                                              // Read input from user
            if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) {                                       // Check condition
                if (s1 == s2 && s2 == s3) System.out.println("Equilateral Triangle");                 // Display identify equilateral, isosceles,... result
                else if (s1 == s2 || s2 == s3 || s1 == s3) System.out.println("Isosceles Triangle");  // Display identify equilateral, isosceles,... result
                else System.out.println("Scalene Triangle");                                          // Display identify equilateral, isosceles,... result
            } else {
                System.out.println("Sides do not form a valid triangle.");                            // Display identify equilateral, isosceles,... result
            }
        }
        sc.close();                                                                                   // Close scanner resource
    }
}
