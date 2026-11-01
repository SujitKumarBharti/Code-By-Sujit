class StringBufferMethods {
    public static void main(String[] args) {
        StringBuffer sb = new StringBuffer("Hello World");  // Instantiate new object
        sb.setCharAt(0, 'h');
        sb.append(" Java");
        sb.insert(6, "Beautiful ");                         // Call member function insert()
        sb.setLength(15);
        String s1 = "Test";                                 // Initialize variable
        String s2 = s1.concat(" String");                   // Initialize variable
        System.out.println("Buffer: " + sb);                // Display buffer
        System.out.println("Equals: " + s1.equals(s2));     // Display equals
    }
}
