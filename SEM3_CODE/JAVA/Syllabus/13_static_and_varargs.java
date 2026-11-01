class StaticVarargs {
    static int sumAll(int... numbers) {
        int total = 0;                                                       // Initialize variable
        for (int n : numbers) {                                              // Loop through elements
            total += n;                                                      // Accumulate updated value
        }
        return total;                                                        // Return computed result total
    }

    public static void main(String[] args) {
        System.out.println("Sum 3 numbers: " + sumAll(1, 2, 3));             // Display sum 3 numbers
        System.out.println("Sum 5 numbers: " + sumAll(10, 20, 30, 40, 50));  // Display sum 5 numbers
    }
}
