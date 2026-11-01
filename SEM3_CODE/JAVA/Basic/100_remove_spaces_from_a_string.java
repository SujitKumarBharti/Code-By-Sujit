class Q100_RemoveSpaces {
    public static void main(String[] args) {
        String str = "J a v a   C o d e";                         // Perform calculation
        StringBuilder sb = new StringBuilder();                   // Perform calculation
        for (char c : str.toCharArray()) {                        // Iterate through loop
            if (c != ' ') sb.append(c);                           // Check condition
        }
        System.out.println("Before: \"" + str + "\"");            // Display remove spaces from a string result
        System.out.println("After : \"" + sb.toString() + "\"");  // Display remove spaces from a string result
    }
}
