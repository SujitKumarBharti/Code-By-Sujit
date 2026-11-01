class Q097_CountWords {
    public static void main(String[] args) {
        String sentence = "Java is a popular class based programming language";  // Perform calculation
        int words = 0;                                                           // Initialize variable
        boolean inWord = false;                                                  // Perform calculation

        for (int i = 0; i < sentence.length(); i++) {                            // Iterate through loop
            char ch = sentence.charAt(i);                                        // Initialize variable
            if (ch != ' ' && ch != '\t' && ch != '\n') {                         // Check condition
                if (!inWord) {                                                   // Check condition
                    words++;
                    inWord = true;                                               // Perform calculation
                }
            } else {
                inWord = false;                                                  // Perform calculation
            }
        }

        System.out.println("Sentence: \"" + sentence + "\"");                    // Display count words in a sentence result
        System.out.println("Word count: " + words);                              // Display count words in a sentence result
    }
}
