class Q058_PyramidPattern {
    public static void main(String[] args) {
        int rows = 5;                                                    // Initialize variable
        for (int i = 1; i <= rows; i++) {                                // Iterate through loop
            for (int j = 1; j <= rows - i; j++) System.out.print(" ");   // Display print a pyramid star pattern result
            for (int k = 1; k <= 2 * i - 1; k++) System.out.print("*");  // Display print a pyramid star pattern result
            System.out.println();                                        // Display print a pyramid star pattern result
        }
    }
}
