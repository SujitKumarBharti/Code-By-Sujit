class Q108_SumOfDigitsRecursion {
    static int sumOfDigits(int n) {
        if (n == 0) return 0;                                                                     // Check condition
        return (n % 10) + sumOfDigits(n / 10);
    }

    public static void main(String[] args) {
        int num = 4321;                                                                           // Initialize variable
        System.out.println("Sum of digits of " + num + " using recursion: " + sumOfDigits(num));  // Display calculate the sum of digits usin... result
    }
}
