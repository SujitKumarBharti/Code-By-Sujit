class Q076_SecondLargest {
    public static void main(String[] args) {
        int[] arr = {12, 35, 1, 10, 34, 1};                         // Perform calculation
        int first = Integer.MIN_VALUE, second = Integer.MIN_VALUE;  // Initialize variable
        for (int x : arr) {                                         // Iterate through loop
            if (x > first) {                                        // Check condition
                second = first;                                     // Perform calculation
                first = x;                                          // Perform calculation
            } else if (x > second && x != first) {                  // Check condition
                second = x;                                         // Perform calculation
            }
        }
        System.out.println("Second largest element: " + second);    // Display find the second-largest element ... result
    }
}
