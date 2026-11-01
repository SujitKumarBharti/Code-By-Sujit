import java.util.Arrays;

class Q081_BubbleSort {
    static void bubbleSort(int[] arr) {
        int n = arr.length;                                            // Initialize variable
        for (int i = 0; i < n - 1; i++) {                              // Iterate through loop
            for (int j = 0; j < n - i - 1; j++) {                      // Iterate through loop
                if (arr[j] > arr[j + 1]) {                             // Check condition
                    int temp = arr[j];                                 // Initialize variable
                    arr[j] = arr[j + 1];                               // Perform calculation
                    arr[j + 1] = temp;                                 // Perform calculation
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = {64, 34, 25, 12, 22, 11, 90};                      // Perform calculation
        System.out.println("Original: " + Arrays.toString(arr));       // Display implement Bubble Sort result
        bubbleSort(arr);
        System.out.println("Bubble Sorted: " + Arrays.toString(arr));  // Display implement Bubble Sort result
    }
}
