import java.util.Scanner;

class Q028_UpperOrLowerCase {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                                       // Initialize scanner for user input
        System.out.print("Enter a character: ");                                                   // Prompt user for input
        String s = sc.next();                                                                      // Read input from user
        if (!s.isEmpty()) {                                                                        // Check condition
            char ch = s.charAt(0);                                                                 // Initialize variable
            if (Character.isUpperCase(ch)) System.out.println("'" + ch + "' is Uppercase.");       // Display check whether a character is upp... result
            else if (Character.isLowerCase(ch)) System.out.println("'" + ch + "' is Lowercase.");  // Display check whether a character is upp... result
            else System.out.println("'" + ch + "' is not a letter.");                              // Display check whether a character is upp... result
        }
        sc.close();                                                                                // Close scanner resource
    }
}
