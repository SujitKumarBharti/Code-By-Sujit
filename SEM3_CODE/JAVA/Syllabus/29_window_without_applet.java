import javax.swing.JFrame;
import javax.swing.JLabel;

class WindowWithoutApplet {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Simple Window");                       // Instantiate new object
        frame.setSize(300, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        JLabel label = new JLabel("Welcome to Java GUI", JLabel.CENTER);  // Instantiate new object
        frame.add(label);
        System.out.println("GUI Frame configured successfully.");         // Display output result
    }
}
