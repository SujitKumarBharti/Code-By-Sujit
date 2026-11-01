class Q092_CopyStringManual {
    public static void main(String[] args) {
        String src = "Java Language";                      // Perform calculation
        StringBuilder dest = new StringBuilder();          // Perform calculation
        for (int i = 0; i < src.length(); i++) {           // Iterate through loop
            dest.append(src.charAt(i));
        }
        System.out.println("Source: " + src);              // Display copy a string without using strc... result
        System.out.println("Copied: " + dest.toString());  // Display copy a string without using strc... result
    }
}
