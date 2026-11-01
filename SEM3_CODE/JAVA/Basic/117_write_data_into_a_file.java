import java.io.FileWriter;
import java.io.IOException;

class Q117_WriteToFile {
    public static void main(String[] args) {
        try (FileWriter writer = new FileWriter("java_output.txt")) {            // Perform calculation
            writer.write("Hello from Java File Writer!\n");
            writer.write("Java provides robust I/O streams for file handling.\n");
            System.out.println("Data successfully written to java_output.txt");  // Display write data into a file result
        } catch (IOException e) {
            System.out.println("An error occurred: " + e.getMessage());          // Display error message for invalid input
        }
    }
}
