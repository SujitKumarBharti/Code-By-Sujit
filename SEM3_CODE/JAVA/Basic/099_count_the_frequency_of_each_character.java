import java.util.*;

class Q099_CharacterFrequency {
    public static void main(String[] args) {
        String str = "programming";                                                  // Perform calculation
        Map<Character, Integer> freq = new LinkedHashMap<>();                        // Perform calculation

        for (char c : str.toCharArray()) {                                           // Iterate through loop
            freq.put(c, freq.getOrDefault(c, 0) + 1);
        }

        System.out.println("String: \"" + str + "\"");                               // Display count the frequency of each char... result
        System.out.println("Character frequencies:");                                // Display count the frequency of each char... result
        for (Map.Entry<Character, Integer> entry : freq.entrySet()) {                // Iterate through loop
            System.out.println("  '" + entry.getKey() + "' : " + entry.getValue());  // Display count the frequency of each char... result
        }
    }
}
