import java.io.FileWriter;
import java.io.IOException;

class Q119_AppendToFile {
    public static void main(String[] args) {
        try (FileWriter writer = new FileWriter("java_output.txt", true)) {       // Perform calculation
            writer.write("Appended line from Java File Stream.\n");
            System.out.println("Data successfully appended to java_output.txt");  // Display append data to a file result
        } catch (IOException e) {
            System.out.println("Error appending to file: " + e.getMessage());     // Display error message for invalid input
        }
    }
}
