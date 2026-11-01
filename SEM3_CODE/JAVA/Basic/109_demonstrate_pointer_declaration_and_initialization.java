class Q109_ReferenceDemonstration {
    static class Box {
        int value;                                                    // Declare variables for calculation
        Box(int v) { this.value = v; }                                // Perform calculation
    }

    public static void main(String[] args) {
        Box b1 = new Box(50);                                         // Perform calculation
        Box b2 = b1;                                                  // b2 references the same object as b1

        System.out.println("Initial b1.value: " + b1.value);          // Display demonstrate pointer declaration ... result
        System.out.println("Initial b2.value: " + b2.value);          // Display demonstrate pointer declaration ... result

        b2.value = 150;                                               // Modified through reference

        System.out.println("After modifying through b2 reference:");  // Display demonstrate pointer declaration ... result
        System.out.println("b1.value: " + b1.value);                  // Display demonstrate pointer declaration ... result
    }
}
