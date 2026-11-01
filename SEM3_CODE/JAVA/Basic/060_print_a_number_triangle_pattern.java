class Q060_NumberTriangle {
    public static void main(String[] args) {
        int rows = 5;                                                // Initialize variable
        for (int i = 1; i <= rows; i++) {                            // Iterate through loop
            for (int j = 1; j <= i; j++) System.out.print(j + " ");  // Display print a number triangle pattern result
            System.out.println();                                    // Display print a number triangle pattern result
        }
    }
}
