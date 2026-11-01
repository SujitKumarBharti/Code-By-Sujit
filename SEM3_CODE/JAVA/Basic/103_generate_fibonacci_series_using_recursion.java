class Q103_FibonacciRecursion {
    static int fibonacci(int n) {
        if (n <= 0) return 0;                                              // Check condition
        if (n == 1) return 1;                                              // Check condition
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

    public static void main(String[] args) {
        int terms = 8;                                                     // Initialize variable
        System.out.print("Fibonacci series up to " + terms + " terms: ");  // Display generate Fibonacci series using ... result
        for (int i = 0; i < terms; i++) {                                  // Iterate through loop
            System.out.print(fibonacci(i) + " ");                          // Display generate Fibonacci series using ... result
        }
        System.out.println();                                              // Display generate Fibonacci series using ... result
    }
}
