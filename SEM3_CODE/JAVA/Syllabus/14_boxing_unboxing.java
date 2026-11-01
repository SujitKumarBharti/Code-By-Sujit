class BoxingUnboxing {
    public static void main(String[] args) {
        int a = 50;                                           // Initialize variable
        Integer boxed = a;                                    // Calculate and assign value
        int unboxed = boxed;                                  // Initialize variable
        System.out.println("Primitive: " + a);                // Display primitive
        System.out.println("Boxed object: " + boxed);         // Display boxed object
        System.out.println("Unboxed primitive: " + unboxed);  // Display unboxed primitive
    }
}
