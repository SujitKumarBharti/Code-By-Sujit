import java.util.Arrays;

class Q085_QuickSort {
    static int partition(int[] arr, int low, int high) {
        int pivot = arr[high];                                        // Initialize variable
        int i = low - 1;                                              // Initialize variable
        for (int j = low; j < high; j++) {                            // Iterate through loop
            if (arr[j] < pivot) {                                     // Check condition
                i++;
                int temp = arr[i];                                    // Initialize variable
                arr[i] = arr[j];                                      // Perform calculation
                arr[j] = temp;                                        // Perform calculation
            }
        }
        int temp = arr[i + 1];                                        // Initialize variable
        arr[i + 1] = arr[high];                                       // Perform calculation
        arr[high] = temp;                                             // Perform calculation
        return i + 1;
    }

    static void quickSort(int[] arr, int low, int high) {
        if (low < high) {                                             // Check condition
            int pi = partition(arr, low, high);                       // Initialize variable
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    public static void main(String[] args) {
        int[] arr = {10, 7, 8, 9, 1, 5};                              // Perform calculation
        System.out.println("Original: " + Arrays.toString(arr));      // Display implement Quick Sort result
        quickSort(arr, 0, arr.length - 1);
        System.out.println("Quick Sorted: " + Arrays.toString(arr));  // Display implement Quick Sort result
    }
}
