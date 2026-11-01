class Q077_CountEvenOddInArray {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Perform calculation
        int even = 0, odd = 0;                        // Initialize variable
        for (int x : arr) {                           // Iterate through loop
            if (x % 2 == 0) even++;                   // Check condition
            else odd++;
        }
        System.out.println("Even count: " + even);    // Display count even and odd elements in a... result
        System.out.println("Odd count : " + odd);     // Display count even and odd elements in a... result
    }
}
