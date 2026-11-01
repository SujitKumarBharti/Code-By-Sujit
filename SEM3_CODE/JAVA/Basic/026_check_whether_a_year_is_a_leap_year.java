import java.util.Scanner;

class Q026_LeapYear {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                              // Initialize scanner for user input
        System.out.print("Enter a year: ");                               // Prompt user for input
        if (sc.hasNextInt()) {                                            // Check condition
            int year = sc.nextInt();                                      // Read input from user
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))  // Check condition
                System.out.println(year + " is a Leap Year.");            // Display check whether a year is a leap year result
            else
                System.out.println(year + " is NOT a Leap Year.");        // Display check whether a year is a leap year result
        }
        sc.close();                                                       // Close scanner resource
    }
}
