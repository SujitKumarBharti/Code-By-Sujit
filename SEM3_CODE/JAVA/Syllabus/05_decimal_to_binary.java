import java.util.Scanner;

class DecimalToBinary {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);            // Instantiate new object
        System.out.print("Enter decimal: ");            // Prompt user to enter decimal
        int dec = sc.hasNextInt() ? sc.nextInt() : 13;  // Read input from scanner
        String bin = Integer.toBinaryString(dec);       // Initialize variable
        System.out.println("Binary: " + bin);           // Display binary
    }
}
