import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

class Q118_ReadFromFile {
    public static void main(String[] args) {
        String filename = "java_output.txt";                                          // Perform calculation

        try (FileWriter fw = new FileWriter(filename, true)) {                        // Perform calculation
            fw.write("");
        } catch (IOException ignored) {}

        try (BufferedReader reader = new BufferedReader(new FileReader(filename))) {  // Perform calculation
            System.out.println("Contents of " + filename + ":");                      // Display read data from a file result
            String line;
            while ((line = reader.readLine()) != null) {                              // Iterate through loop
                System.out.println(line);                                             // Display read data from a file result
            }
        } catch (IOException e) {
            System.out.println("Error reading file: " + e.getMessage());              // Display error message for invalid input
        }
    }
}
