import java.util.Scanner;

class Q019_AsciiValue {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                  // Initialize scanner for user input
        System.out.print("Enter a character: ");                              // Prompt user for input
        String s = sc.next();                                                 // Read input from user
        if (!s.isEmpty()) {                                                   // Check condition
            char ch = s.charAt(0);                                            // Initialize variable
            System.out.println("ASCII value of '" + ch + "' is " + (int)ch);  // Display find the ASCII value of a character result
        }
        sc.close();                                                           // Close scanner resource
    }
}
