class Q116_UnionDemonstration {
    static class UnionData {
        private Object value;

        void set(Object val) { this.value = val; }                                  // Perform calculation
        Object get() { return this.value; }
        String getType() { return value != null ? value.getClass().getSimpleName() : "null"; }
    }

    public static void main(String[] args) {
        UnionData u = new UnionData();                                              // Perform calculation

        u.set(100);
        System.out.println("Stored: " + u.get() + " (Type: " + u.getType() + ")");  // Display demonstrate union in C (simulate... result

        u.set(45.67f);
        System.out.println("Stored: " + u.get() + " (Type: " + u.getType() + ")");  // Display demonstrate union in C (simulate... result

        u.set("Java Polymorphic Union");
        System.out.println("Stored: " + u.get() + " (Type: " + u.getType() + ")");  // Display demonstrate union in C (simulate... result
    }
}
