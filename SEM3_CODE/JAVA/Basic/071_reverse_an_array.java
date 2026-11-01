class Q071_ReverseArray {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};                            // Perform calculation
        for (int i = 0, j = arr.length - 1; i < j; i++, j--) {  // Iterate through loop
            int temp = arr[i];                                  // Initialize variable
            arr[i] = arr[j];                                    // Perform calculation
            arr[j] = temp;                                      // Perform calculation
        }
        System.out.print("Reversed array: ");                   // Display reverse an array result
        for (int x : arr) System.out.print(x + " ");            // Display reverse an array result
        System.out.println();                                   // Display reverse an array result
    }
}
