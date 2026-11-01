class OverloadPromotion {
    static void test(double d) {
        System.out.println("Promoted to double: " + d);  // Display promoted to double
    }

    static void test(long l) {
        System.out.println("Promoted to long: " + l);    // Display promoted to long
    }

    public static void main(String[] args) {
        byte b = 10;                                     // Calculate and assign value
        int i = 25;                                      // Initialize variable
        test(b);
        test(i);
    }
}
