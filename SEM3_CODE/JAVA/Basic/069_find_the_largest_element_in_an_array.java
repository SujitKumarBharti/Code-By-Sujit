class Q069_LargestElement {
    public static void main(String[] args) {
        int[] arr = {23, 89, 12, 54, 76, 95, 32};       // Perform calculation
        int max = arr[0];                               // Initialize variable
        for (int i = 1; i < arr.length; i++) {          // Iterate through loop
            if (arr[i] > max) max = arr[i];             // Check condition
        }
        System.out.println("Largest element: " + max);  // Display find the largest element in an a... result
    }
}
