import java.util.Arrays;

class Q089_DuplicatesUsingSorting {
    public static void main(String[] args) {
        int[] arr = {4, 2, 7, 2, 8, 4, 3, 1};                            // Perform calculation
        Arrays.sort(arr);

        System.out.print("Duplicate elements: ");                        // Display find duplicate elements using so... result
        boolean found = false;                                           // Perform calculation
        for (int i = 0; i < arr.length - 1; i++) {                       // Iterate through loop
            if (arr[i] == arr[i + 1]) {                                  // Check condition
                System.out.print(arr[i] + " ");                          // Display find duplicate elements using so... result
                found = true;                                            // Perform calculation
                while (i < arr.length - 1 && arr[i] == arr[i + 1]) i++;  // Iterate through loop
            }
        }
        if (!found) System.out.print("None");                            // Display find duplicate elements using so... result
        System.out.println();                                            // Display find duplicate elements using so... result
    }
}
