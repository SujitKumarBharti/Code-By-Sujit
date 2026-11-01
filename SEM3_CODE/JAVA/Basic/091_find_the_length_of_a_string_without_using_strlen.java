class Q091_LengthWithoutStrlen {
    public static void main(String[] args) {
        String str = "Java Programming";                // Perform calculation
        int len = 0;                                    // Initialize variable
        try {
            while (true) {                              // Iterate through loop
                str.charAt(len);
                len++;
            }
        } catch (IndexOutOfBoundsException e) {

        }
        System.out.println("String: \"" + str + "\"");  // Display find the length of a string with... result
        System.out.println("Length: " + len);           // Display find the length of a string with... result
    }
}
