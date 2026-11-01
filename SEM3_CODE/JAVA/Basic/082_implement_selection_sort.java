import java.util.Arrays;

class Q082_SelectionSort {
    static void selectionSort(int[] arr) {
        int n = arr.length;                                               // Initialize variable
        for (int i = 0; i < n - 1; i++) {                                 // Iterate through loop
            int minIdx = i;                                               // Initialize variable
            for (int j = i + 1; j < n; j++) {                             // Iterate through loop
                if (arr[j] < arr[minIdx]) minIdx = j;                     // Check condition
            }
            int temp = arr[i];                                            // Initialize variable
            arr[i] = arr[minIdx];                                         // Perform calculation
            arr[minIdx] = temp;                                           // Perform calculation
        }
    }

    public static void main(String[] args) {
        int[] arr = {29, 10, 14, 37, 13};                                 // Perform calculation
        System.out.println("Original: " + Arrays.toString(arr));          // Display implement Selection Sort result
        selectionSort(arr);
        System.out.println("Selection Sorted: " + Arrays.toString(arr));  // Display implement Selection Sort result
    }
}
