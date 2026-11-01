class Q057_InvertedTriangle {
    public static void main(String[] args) {
        int rows = 5;                                             // Initialize variable
        for (int i = rows; i >= 1; i--) {                         // Iterate through loop
            for (int j = 1; j <= i; j++) System.out.print("* ");  // Display print an inverted triangle star ... result
            System.out.println();                                 // Display print an inverted triangle star ... result
        }
    }
}
