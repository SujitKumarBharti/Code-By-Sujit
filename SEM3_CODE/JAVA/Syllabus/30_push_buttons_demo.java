import javax.swing.JButton;
import javax.swing.JFrame;
import java.awt.FlowLayout;

class PushButtonsDemo {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Push Buttons");                              // Instantiate new object
        frame.setLayout(new FlowLayout());                                      // Instantiate new object
        JButton btn1 = new JButton("Submit");                                   // Instantiate new object
        JButton btn2 = new JButton("Cancel");                                   // Instantiate new object
        frame.add(btn1);
        frame.add(btn2);
        System.out.println("Push buttons created and attached successfully.");  // Display output result
    }
}
