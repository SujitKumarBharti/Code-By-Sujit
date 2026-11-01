class TwoDArrayLength {
    public static void main(String[] args) {
        int[][] matrix = {                                                    // Calculate and assign value
            {1, 2, 3},
            {4, 5, 6, 7},
            {8, 9}
        };
        System.out.println("Rows: " + matrix.length);                         // Display rows
        for (int i = 0; i < matrix.length; i++) {                             // Loop through elements
            System.out.println("Row " + i + " length: " + matrix[i].length);  // Display row
        }
    }
}
