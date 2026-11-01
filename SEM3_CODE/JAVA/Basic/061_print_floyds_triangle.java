class Q061_FloydsTriangle {
    public static void main(String[] args) {
        int rows = 5, num = 1;                                             // Initialize variable
        for (int i = 1; i <= rows; i++) {                                  // Iterate through loop
            for (int j = 1; j <= i; j++) System.out.print((num++) + " ");  // Display print Floyd's triangle result
            System.out.println();                                          // Display print Floyd's triangle result
        }
    }
}
