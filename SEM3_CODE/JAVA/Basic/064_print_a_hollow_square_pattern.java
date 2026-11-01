class Q064_HollowSquare {
    public static void main(String[] args) {
        int size = 5;                                                                    // Initialize variable
        for (int i = 1; i <= size; i++) {                                                // Iterate through loop
            for (int j = 1; j <= size; j++) {                                            // Iterate through loop
                if (i == 1 || i == size || j == 1 || j == size) System.out.print("* ");  // Display print a hollow square pattern result
                else System.out.print("  ");                                             // Display print a hollow square pattern result
            }
            System.out.println();                                                        // Display print a hollow square pattern result
        }
    }
}
