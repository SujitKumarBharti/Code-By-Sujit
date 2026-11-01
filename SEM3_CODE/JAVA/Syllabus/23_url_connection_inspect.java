import java.net.URL;
import java.net.URLConnection;

class URLConnectionInspect {
    public static void main(String[] args) {
        try {
            URL url = new URL("https://www.example.com");                // Instantiate new object
            System.out.println("Protocol: " + url.getProtocol());        // Display protocol
            System.out.println("Host: " + url.getHost());                // Display host
            System.out.println("Port: " + url.getPort());                // Display port
            System.out.println("File: " + url.getFile());                // Display file
        } catch (Exception e) {
            System.out.println("Error reading URL: " + e.getMessage());  // Display error message
        }
    }
}
