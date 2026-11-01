class Q051_Primes1To100 {
    public static void main(String[] args) {
        System.out.println("Prime numbers between 1 and 100:");  // Display print all prime numbers between ... result
        for (int n = 2; n <= 100; n++) {                         // Iterate through loop
            boolean isPrime = true;                              // Perform calculation
            for (int i = 2; i * i <= n; i++) {                   // Iterate through loop
                if (n % i == 0) {                                // Check condition
                    isPrime = false;                             // Perform calculation
                    break;
                }
            }
            if (isPrime) System.out.print(n + " ");              // Display print all prime numbers between ... result
        }
        System.out.println();                                    // Display print all prime numbers between ... result
    }
}
