class Q098_ToLowerToUpper {
    public static void main(String[] args) {
        String str = "hello world from java";                   // Perform calculation
        char[] chars = str.toCharArray();                       // Perform calculation
        for (int i = 0; i < chars.length; i++) {                // Iterate through loop
            if (chars[i] >= 'a' && chars[i] <= 'z') {           // Check condition
                chars[i] = (char)(chars[i] - 32);               // Perform calculation
            }
        }
        System.out.println("Original : " + str);                // Display convert lowercase letters into u... result
        System.out.println("Uppercase: " + new String(chars));  // Display convert lowercase letters into u... result
    }
}
