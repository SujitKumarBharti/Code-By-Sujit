class Q059_DiamondPattern {
    public static void main(String[] args) {
        int n = 5;                                                       // Initialize variable
        for (int i = 1; i <= n; i++) {                                   // Iterate through loop
            for (int j = 1; j <= n - i; j++) System.out.print(" ");      // Display print a diamond star pattern result
            for (int k = 1; k <= 2 * i - 1; k++) System.out.print("*");  // Display print a diamond star pattern result
            System.out.println();                                        // Display print a diamond star pattern result
        }
        for (int i = n - 1; i >= 1; i--) {                               // Iterate through loop
            for (int j = 1; j <= n - i; j++) System.out.print(" ");      // Display print a diamond star pattern result
            for (int k = 1; k <= 2 * i - 1; k++) System.out.print("*");  // Display print a diamond star pattern result
            System.out.println();                                        // Display print a diamond star pattern result
        }
    }
}
