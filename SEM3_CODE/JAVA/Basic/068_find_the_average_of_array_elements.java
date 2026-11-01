class Q068_AverageArrayElements {
    public static void main(String[] args) {
        int[] arr = {15, 25, 35, 45, 55};                                            // Perform calculation
        double sum = 0;                                                              // Initialize variable
        for (int x : arr) sum += x;                                                  // Iterate through loop
        System.out.printf("Average of array elements: %.2f\n", (sum / arr.length));  // Display find the average of array elements result
    }
}
