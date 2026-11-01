class Q074_LinearSearch {
    public static void main(String[] args) {
        int[] arr = {15, 23, 7, 42, 19, 8};                                                    // Perform calculation
        int key = 42;                                                                          // Initialize variable
        int pos = -1;                                                                          // Initialize variable
        for (int i = 0; i < arr.length; i++) {                                                 // Iterate through loop
            if (arr[i] == key) {                                                               // Check condition
                pos = i;                                                                       // Perform calculation
                break;
            }
        }
        if (pos != -1) System.out.println("Element " + key + " found at index " + pos + ".");  // Display search an element using Linear S... result
        else System.out.println("Element " + key + " not found.");                             // Display search an element using Linear S... result
    }
}
