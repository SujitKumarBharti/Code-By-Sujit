class Q107_PowerRecursion {
    static double power(double base, int exp) {
        if (exp == 0) return 1.0;                                                           // Check condition
        if (exp < 0) return 1.0 / power(base, -exp);                                        // Check condition
        return base * power(base, exp - 1);
    }

    public static void main(String[] args) {
        double base = 2.0;                                                                  // Initialize variable
        int exp = 6;                                                                        // Initialize variable
        System.out.println(base + " ^ " + exp + " using recursion = " + power(base, exp));  // Display find power using recursion result
    }
}
