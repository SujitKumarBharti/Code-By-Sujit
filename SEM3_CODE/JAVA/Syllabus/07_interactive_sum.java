import java.util.Scanner;

class InteractiveSum {
    public static void main(String[] args) {
        int count = args.length > 0 ? Integer.parseInt(args[0]) : 3;  // Initialize variable
        Scanner sc = new Scanner(System.in);                          // Instantiate new object
        int sum = 0;                                                  // Initialize variable
        System.out.println("Enter " + count + " numbers:");           // Display enter
        for (int i = 0; i < count; i++) {                             // Loop through elements
            sum += sc.hasNextInt() ? sc.nextInt() : (i + 1);          // Read input from scanner
        }
        System.out.println("Total sum: " + sum);                      // Display total sum
    }
}
