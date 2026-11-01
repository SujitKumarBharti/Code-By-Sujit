import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

class DatagramClientServer {
    public static void main(String[] args) {
        try {
            String msg = "Hello Datagram";                                                                          // Initialize variable
            byte[] buf = msg.getBytes();                                                                            // Calculate and assign value
            DatagramPacket packet = new DatagramPacket(buf, buf.length, InetAddress.getByName("127.0.0.1"), 8080);  // Instantiate new object
            System.out.println("Constructed datagram packet: " + new String(packet.getData()));                     // Display constructed datagram packet
        } catch (Exception e) {
            System.out.println("Socket error: " + e.getMessage());                                                  // Display error message
        }
    }
}
