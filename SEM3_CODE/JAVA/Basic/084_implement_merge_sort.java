import java.util.Arrays;

class Q084_MergeSort {
    static void merge(int[] arr, int l, int m, int r) {
        int n1 = m - l + 1;                                           // Initialize variable
        int n2 = r - m;                                               // Initialize variable
        int[] L = new int[n1];                                        // Perform calculation
        int[] R = new int[n2];                                        // Perform calculation

        for (int i = 0; i < n1; ++i) L[i] = arr[l + i];               // Iterate through loop
        for (int j = 0; j < n2; ++j) R[j] = arr[m + 1 + j];           // Iterate through loop

        int i = 0, j = 0, k = l;                                      // Initialize variable
        while (i < n1 && j < n2) {                                    // Iterate through loop
            if (L[i] <= R[j]) arr[k++] = L[i++];                      // Check condition
            else arr[k++] = R[j++];                                   // Perform calculation
        }
        while (i < n1) arr[k++] = L[i++];                             // Iterate through loop
        while (j < n2) arr[k++] = R[j++];                             // Iterate through loop
    }

    static void sort(int[] arr, int l, int r) {
        if (l < r) {                                                  // Check condition
            int m = l + (r - l) / 2;                                  // Initialize variable
            sort(arr, l, m);
            sort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }

    public static void main(String[] args) {
        int[] arr = {38, 27, 43, 3, 9, 82, 10};                       // Perform calculation
        System.out.println("Original: " + Arrays.toString(arr));      // Display implement Merge Sort result
        sort(arr, 0, arr.length - 1);
        System.out.println("Merge Sorted: " + Arrays.toString(arr));  // Display implement Merge Sort result
    }
}
