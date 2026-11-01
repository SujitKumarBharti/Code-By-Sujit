class Q096_CountVowelsConsonants {
    public static void main(String[] args) {
        String str = "Object Oriented Java";                                                  // Perform calculation
        int vowels = 0, consonants = 0;                                                       // Initialize variable

        for (int i = 0; i < str.length(); i++) {                                              // Iterate through loop
            char ch = Character.toLowerCase(str.charAt(i));                                   // Initialize variable
            if (Character.isLetter(ch)) {                                                     // Check condition
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels++;  // Check condition
                else consonants++;
            }
        }

        System.out.println("String: \"" + str + "\"");                                        // Display count vowels and consonants in a... result
        System.out.println("Vowels: " + vowels + ", Consonants: " + consonants);              // Display count vowels and consonants in a... result
    }
}
