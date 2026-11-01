class Q104_GCDRecursion {
    static int gcd(int a, int b) {
        if (b == 0) return a;                                                                // Check condition
        return gcd(b, a % b);
    }

    public static void main(String[] args) {
        int a = 60, b = 24;                                                                  // Initialize variable
        System.out.println("GCD of " + a + " and " + b + " using recursion: " + gcd(a, b));  // Display find GCD using recursion result
    }
}
