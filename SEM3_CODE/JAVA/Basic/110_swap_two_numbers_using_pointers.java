class Q110_SwapArrayReference {
    static void swap(int[] arr, int i, int j) {
        int temp = arr[i];                                                       // Initialize variable
        arr[i] = arr[j];                                                         // Perform calculation
        arr[j] = temp;                                                           // Perform calculation
    }

    public static void main(String[] args) {
        int[] pair = {100, 200};                                                 // Perform calculation
        System.out.println("Before swap: [0]=" + pair[0] + ", [1]=" + pair[1]);  // Display swap two numbers using pointers ... result
        swap(pair, 0, 1);
        System.out.println("After swap : [0]=" + pair[0] + ", [1]=" + pair[1]);  // Display swap two numbers using pointers ... result
    }
}
