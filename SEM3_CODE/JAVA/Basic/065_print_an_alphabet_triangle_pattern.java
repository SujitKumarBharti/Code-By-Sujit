class Q065_AlphabetTriangle {
    public static void main(String[] args) {
        int rows = 5;                                                     // Initialize variable
        for (int i = 1; i <= rows; i++) {                                 // Iterate through loop
            char ch = 'A';                                                // Initialize variable
            for (int j = 1; j <= i; j++) System.out.print((ch++) + " ");  // Display print an alphabet triangle pattern result
            System.out.println();                                         // Display print an alphabet triangle pattern result
        }
    }
}
