import java.util.Arrays;

class Q079_MergeArrays {
    public static void main(String[] args) {
        int[] a = {1, 3, 5};                                             // Perform calculation
        int[] b = {2, 4, 6};                                             // Perform calculation
        int[] merged = new int[a.length + b.length];                     // Perform calculation
        for (int i = 0; i < a.length; i++) merged[i] = a[i];             // Iterate through loop
        for (int i = 0; i < b.length; i++) merged[a.length + i] = b[i];  // Iterate through loop
        System.out.println("Merged array: " + Arrays.toString(merged));  // Display merge two arrays result
    }
}
