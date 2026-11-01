class FibonacciGenerator {
    public void generate(int n) {
        int a = 0, b = 1;                                   // Initialize variable
        System.out.print("Series: ");                       // Call member function print()
        for (int i = 0; i < n; i++) {                       // Loop through elements
            System.out.print(a + " ");                      // Call member function print()
            int sum = a + b;                                // Initialize variable
            a = b;                                          // Calculate and assign value
            b = sum;                                        // Calculate and assign value
        }
        System.out.println();                               // Display output result
    }
}

class FibonacciPackageDemo {
    public static void main(String[] args) {
        FibonacciGenerator gen = new FibonacciGenerator();  // Instantiate new object
        gen.generate(7);
    }
}
