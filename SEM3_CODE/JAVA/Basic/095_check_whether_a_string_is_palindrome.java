class Q095_StringPalindrome {
    public static void main(String[] args) {
        String str = "racecar";                                             // Perform calculation
        boolean isPal = true;                                               // Perform calculation
        for (int i = 0, j = str.length() - 1; i < j; i++, j--) {            // Iterate through loop
            if (str.charAt(i) != str.charAt(j)) {                           // Check condition
                isPal = false;                                              // Perform calculation
                break;
            }
        }
        if (isPal) System.out.println("\"" + str + "\" is a Palindrome.");  // Display check whether a string is palind... result
        else System.out.println("\"" + str + "\" is NOT a Palindrome.");    // Display check whether a string is palind... result
    }
}
