class Q072_SortAscending {
    public static void main(String[] args) {
        int[] arr = {64, 25, 12, 22, 11};             // Perform calculation
        int n = arr.length;                           // Initialize variable
        for (int i = 0; i < n - 1; i++) {             // Iterate through loop
            for (int j = 0; j < n - i - 1; j++) {     // Iterate through loop
                if (arr[j] > arr[j + 1]) {            // Check condition
                    int temp = arr[j];                // Initialize variable
                    arr[j] = arr[j + 1];              // Perform calculation
                    arr[j + 1] = temp;                // Perform calculation
                }
            }
        }
        System.out.print("Ascending order: ");        // Display sort an array in ascending order result
        for (int x : arr) System.out.print(x + " ");  // Display sort an array in ascending order result
        System.out.println();                         // Display sort an array in ascending order result
    }
}
