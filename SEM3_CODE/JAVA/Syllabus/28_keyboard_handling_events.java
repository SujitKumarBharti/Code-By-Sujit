import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

class KeyboardHandlingEvents implements KeyListener {
    public void keyTyped(KeyEvent e) { System.out.println("Key Typed: " + e.getKeyChar()); }      // Display key typed
    public void keyPressed(KeyEvent e) { System.out.println("Key Pressed: " + e.getKeyCode()); }  // Display key pressed
    public void keyReleased(KeyEvent e) { System.out.println("Key Released"); }                   // Display key released

    public static void main(String[] args) {
        System.out.println("Keyboard event listener implemented successfully.");                  // Display output result
    }
}
