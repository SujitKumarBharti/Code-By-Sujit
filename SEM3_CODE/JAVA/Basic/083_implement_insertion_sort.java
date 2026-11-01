import java.util.Arrays;

class Q083_InsertionSort {
    static void insertionSort(int[] arr) {
        int n = arr.length;                                               // Initialize variable
        for (int i = 1; i < n; i++) {                                     // Iterate through loop
            int key = arr[i];                                             // Initialize variable
            int j = i - 1;                                                // Initialize variable
            while (j >= 0 && arr[j] > key) {                              // Iterate through loop
                arr[j + 1] = arr[j];                                      // Perform calculation
                j--;
            }
            arr[j + 1] = key;                                             // Perform calculation
        }
    }

    public static void main(String[] args) {
        int[] arr = {12, 11, 13, 5, 6};                                   // Perform calculation
        System.out.println("Original: " + Arrays.toString(arr));          // Display implement Insertion Sort result
        insertionSort(arr);
        System.out.println("Insertion Sorted: " + Arrays.toString(arr));  // Display implement Insertion Sort result
    }
}
