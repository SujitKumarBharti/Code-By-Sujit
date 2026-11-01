class Q105_PrimeFunction {
    static boolean isPrime(int n) {
        if (n <= 1) return false;                                           // Check condition
        for (int i = 2; i * i <= n; i++) {                                  // Iterate through loop
            if (n % i == 0) return false;                                   // Check condition
        }
        return true;
    }

    public static void main(String[] args) {
        int num = 43;                                                       // Initialize variable
        if (isPrime(num)) System.out.println(num + " is a Prime number.");  // Display check prime number using a function result
        else System.out.println(num + " is NOT a Prime number.");           // Display check prime number using a function result
    }
}
