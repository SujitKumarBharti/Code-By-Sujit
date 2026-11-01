import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

class Q120_FileStatistics {
    public static void main(String[] args) {
        String filename = "java_output.txt";                                           // Perform calculation
        int characters = 0, words = 0, lines = 0;                                      // Initialize variable

        try (BufferedReader reader = new BufferedReader(new FileReader(filename))) {   // Perform calculation
            String line;
            while ((line = reader.readLine()) != null) {                               // Iterate through loop
                lines++;
                characters += line.length() + 1;                                       // plus newline
                String[] tokens = line.trim().split("\\s+");                           // Perform calculation
                if (tokens.length > 0 && !tokens[0].isEmpty()) {                       // Check condition
                    words += tokens.length;                                            // Perform calculation
                }
            }
            System.out.println("File Statistics for " + filename + ":");               // Display count characters, words, and lin... result
            System.out.println("Characters : " + characters);                          // Display count characters, words, and lin... result
            System.out.println("Words      : " + words);                               // Display count characters, words, and lin... result
            System.out.println("Lines      : " + lines);                               // Display count characters, words, and lin... result
        } catch (IOException e) {
            System.out.println("File not found or error reading: " + e.getMessage());  // Display error message for invalid input
        }
    }
}
