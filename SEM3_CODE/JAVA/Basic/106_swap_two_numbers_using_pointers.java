class Q106_SwapUsingReferences {
    static class IntWrapper {
        int val;                                                             // Declare variables for calculation
        IntWrapper(int v) { this.val = v; }                                  // Perform calculation
    }

    static void swap(IntWrapper a, IntWrapper b) {
        int temp = a.val;                                                    // Initialize variable
        a.val = b.val;                                                       // Perform calculation
        b.val = temp;                                                        // Perform calculation
    }

    public static void main(String[] args) {
        IntWrapper x = new IntWrapper(10);                                   // Perform calculation
        IntWrapper y = new IntWrapper(20);                                   // Perform calculation
        System.out.println("Before swap: x = " + x.val + ", y = " + y.val);  // Display swap two numbers using pointers ... result
        swap(x, y);
        System.out.println("After swap : x = " + x.val + ", y = " + y.val);  // Display swap two numbers using pointers ... result
    }
}
