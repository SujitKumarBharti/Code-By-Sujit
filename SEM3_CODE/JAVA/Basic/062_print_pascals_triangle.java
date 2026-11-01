class Q062_PascalsTriangle {
    public static void main(String[] args) {
        int rows = 5;                                                   // Initialize variable
        for (int i = 0; i < rows; i++) {                                // Iterate through loop
            int val = 1;                                                // Initialize variable
            for (int s = 1; s <= rows - i; s++) System.out.print(" ");  // Display print Pascal's triangle result
            for (int j = 0; j <= i; j++) {                              // Iterate through loop
                System.out.print(val + " ");                            // Display print Pascal's triangle result
                val = val * (i - j) / (j + 1);                          // Perform calculation
            }
            System.out.println();                                       // Display print Pascal's triangle result
        }
    }
}
