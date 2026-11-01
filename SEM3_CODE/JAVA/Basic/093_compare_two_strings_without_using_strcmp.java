class Q093_CompareStringsManual {
    public static void main(String[] args) {
        String s1 = "Hello";                                                            // Perform calculation
        String s2 = "Hello";                                                            // Perform calculation
        boolean equal = true;                                                           // Perform calculation

        if (s1.length() != s2.length()) {                                               // Check condition
            equal = false;                                                              // Perform calculation
        } else {
            for (int i = 0; i < s1.length(); i++) {                                     // Iterate through loop
                if (s1.charAt(i) != s2.charAt(i)) {                                     // Check condition
                    equal = false;                                                      // Perform calculation
                    break;
                }
            }
        }

        if (equal) System.out.println("\"" + s1 + "\" and \"" + s2 + "\" are EQUAL.");  // Display compare two strings without usin... result
        else System.out.println("\"" + s1 + "\" and \"" + s2 + "\" are NOT equal.");    // Display compare two strings without usin... result
    }
}
