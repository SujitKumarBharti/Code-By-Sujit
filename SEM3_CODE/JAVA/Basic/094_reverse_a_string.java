class Q094_ReverseString {
    public static void main(String[] args) {
        String str = "Antigravity";                               // Perform calculation
        char[] chars = str.toCharArray();                         // Perform calculation
        for (int i = 0, j = chars.length - 1; i < j; i++, j--) {  // Iterate through loop
            char temp = chars[i];                                 // Initialize variable
            chars[i] = chars[j];                                  // Perform calculation
            chars[j] = temp;                                      // Perform calculation
        }
        System.out.println("Original: " + str);                   // Display reverse a string result
        System.out.println("Reversed: " + new String(chars));     // Display reverse a string result
    }
}
