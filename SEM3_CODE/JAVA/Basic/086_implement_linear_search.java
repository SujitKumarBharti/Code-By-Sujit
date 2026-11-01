class Q086_LinearSearchAlgorithm {
    static int linearSearch(int[] arr, int key) {
        for (int i = 0; i < arr.length; i++) {                                                 // Iterate through loop
            if (arr[i] == key) return i;                                                       // Check condition
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = {15, 23, 7, 42, 19, 8};                                                    // Perform calculation
        int key = 42;                                                                          // Initialize variable
        int idx = linearSearch(arr, key);                                                      // Initialize variable
        if (idx != -1) System.out.println("Element " + key + " found at index " + idx + ".");  // Display implement Linear Search result
        else System.out.println("Element " + key + " not found.");                             // Display implement Linear Search result
    }
}
