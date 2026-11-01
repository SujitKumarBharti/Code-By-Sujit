class Q087_BinarySearchAlgorithm {
    static int binarySearch(int[] arr, int key) {
        int low = 0, high = arr.length - 1;                                                    // Initialize variable
        while (low <= high) {                                                                  // Iterate through loop
            int mid = low + (high - low) / 2;                                                  // Initialize variable
            if (arr[mid] == key) return mid;                                                   // Check condition
            if (arr[mid] < key) low = mid + 1;                                                 // Check condition
            else high = mid - 1;                                                               // Perform calculation
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};                                     // Perform calculation
        int key = 23;                                                                          // Initialize variable
        int idx = binarySearch(arr, key);                                                      // Initialize variable
        if (idx != -1) System.out.println("Element " + key + " found at index " + idx + ".");  // Display implement Binary Search result
        else System.out.println("Element " + key + " not found.");                             // Display implement Binary Search result
    }
}
