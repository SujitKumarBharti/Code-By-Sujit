class Q070_SmallestElement {
    public static void main(String[] args) {
        int[] arr = {23, 89, 12, 54, 76, 95, 32};        // Perform calculation
        int min = arr[0];                                // Initialize variable
        for (int i = 1; i < arr.length; i++) {           // Iterate through loop
            if (arr[i] < min) min = arr[i];              // Check condition
        }
        System.out.println("Smallest element: " + min);  // Display find the smallest element in an ... result
    }
}
