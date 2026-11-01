import java.util.Scanner;

class Q027_VowelOrConsonant {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                        // Initialize scanner for user input
        System.out.print("Enter an alphabet character: ");                          // Prompt user for input
        String s = sc.next();                                                       // Read input from user
        if (!s.isEmpty()) {                                                         // Check condition
            char ch = Character.toLowerCase(s.charAt(0));                           // Initialize variable
            if (Character.isLetter(ch)) {                                           // Check condition
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')  // Check condition
                    System.out.println("'" + s.charAt(0) + "' is a Vowel.");        // Display check whether a character is a v... result
                else
                    System.out.println("'" + s.charAt(0) + "' is a Consonant.");    // Display check whether a character is a v... result
            } else {
                System.out.println("'" + s.charAt(0) + "' is not a letter.");       // Display check whether a character is a v... result
            }
        }
        sc.close();                                                                 // Close scanner resource
    }
}
