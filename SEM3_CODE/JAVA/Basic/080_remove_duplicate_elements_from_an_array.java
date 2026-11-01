import java.util.*;

class Q080_RemoveDuplicates {
    public static void main(String[] args) {
        int[] arr = {1, 2, 2, 3, 4, 4, 5};                              // Perform calculation
        List<Integer> unique = new ArrayList<>();                       // Perform calculation
        for (int x : arr) {                                             // Iterate through loop
            if (!unique.contains(x)) unique.add(x);                     // Check condition
        }
        System.out.println("Original array: " + Arrays.toString(arr));  // Display remove duplicate elements from a... result
        System.out.println("Without duplicates: " + unique);            // Display remove duplicate elements from a... result
    }
}
