import java.util.Scanner;

class DynamicArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);            // Instantiate new object
        System.out.print("Enter size: ");               // Prompt user to enter size
        int size = sc.hasNextInt() ? sc.nextInt() : 3;  // Read input from scanner
        int[] arr = new int[size];                      // Instantiate new object
        for (int i = 0; i < size; i++) {                // Loop through elements
            arr[i] = (i + 1) * 10;                      // Calculate and assign value
        }
        for (int val : arr) {                           // Loop through elements
            System.out.println("Element: " + val);      // Display element
        }
    }
}
