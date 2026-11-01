import java.util.Scanner;

class Q031_VotingEligibility {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                                                         // Initialize scanner for user input
        System.out.print("Enter your age: ");                                                        // Prompt user for input
        if (sc.hasNextInt()) {                                                                       // Check condition
            int age = sc.nextInt();                                                                  // Read input from user
            if (age >= 18) System.out.println("Eligible to vote.");                                  // Display check whether a person is eligib... result
            else System.out.println("Not eligible to vote. Wait " + (18 - age) + " more year(s).");  // Display check whether a person is eligib... result
        }
        sc.close();                                                                                  // Close scanner resource
    }
}
