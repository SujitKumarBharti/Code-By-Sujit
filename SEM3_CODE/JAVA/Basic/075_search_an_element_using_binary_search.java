class Q075_BinarySearch {
    public static void main(String[] args) {
        int[] arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};                                     // Perform calculation
        int key = 23;                                                                          // Initialize variable
        int low = 0, high = arr.length - 1, pos = -1;                                          // Initialize variable
        while (low <= high) {                                                                  // Iterate through loop
            int mid = low + (high - low) / 2;                                                  // Initialize variable
            if (arr[mid] == key) {                                                             // Check condition
                pos = mid;                                                                     // Perform calculation
                break;
            } else if (arr[mid] < key) low = mid + 1;                                          // Check condition
            else high = mid - 1;                                                               // Perform calculation
        }
        if (pos != -1) System.out.println("Element " + key + " found at index " + pos + ".");  // Display search an element using Binary S... result
        else System.out.println("Element " + key + " not found.");                             // Display search an element using Binary S... result
    }
}
