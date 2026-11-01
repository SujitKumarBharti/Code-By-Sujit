import java.util.Scanner;

class Q066_ReadDisplayArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                // Initialize scanner for user input
        System.out.print("Enter number of elements: ");     // Prompt user for input
        int n = sc.nextInt();                               // Read input from user
        int[] arr = new int[n];                             // Perform calculation
        System.out.print("Enter " + n + " elements: ");     // Prompt user for input
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();  // Read input from user

        System.out.print("Array elements: ");               // Display read and display array elements result
        for (int x : arr) System.out.print(x + " ");        // Display read and display array elements result
        System.out.println();                               // Display read and display array elements result
        sc.close();                                         // Close scanner resource
    }
}
