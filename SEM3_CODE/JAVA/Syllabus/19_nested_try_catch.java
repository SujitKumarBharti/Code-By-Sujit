class NestedTryCatch {
    public static void main(String[] args) {
        try {
            int a = 5;                                                  // Initialize variable
            int b = 1;                                                  // Initialize variable
            int c = a / b;                                              // Initialize variable
            try {
                int[] arr = {1, 2};                                     // Calculate and assign value
                System.out.println(arr[5]);                             // Display output result
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println("Inner catch: Array index error!");  // Display error message
            }
        } catch (ArithmeticException e) {
            System.out.println("Outer catch: Arithmetic error!");       // Display error message
        }
    }
}
