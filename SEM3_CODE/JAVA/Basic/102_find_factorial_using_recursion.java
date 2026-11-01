class Q102_FactorialRecursion {
    static long factorial(int n) {
        if (n <= 1) return 1;                                                           // Check condition
        return n * factorial(n - 1);
    }

    public static void main(String[] args) {
        int n = 5;                                                                      // Initialize variable
        System.out.println("Factorial of " + n + " using recursion: " + factorial(n));  // Display find factorial using recursion result
    }
}
