import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

class MouseHandlingEvents implements MouseListener {
    public void mouseClicked(MouseEvent e) { System.out.println("Mouse Clicked"); }    // Display mouse clicked
    public void mousePressed(MouseEvent e) { System.out.println("Mouse Pressed"); }    // Display mouse pressed
    public void mouseReleased(MouseEvent e) { System.out.println("Mouse Released"); }  // Display mouse released
    public void mouseEntered(MouseEvent e) { System.out.println("Mouse Entered"); }    // Display mouse entered
    public void mouseExited(MouseEvent e) { System.out.println("Mouse Exited"); }      // Display mouse exited

    public static void main(String[] args) {
        System.out.println("Mouse event listener implemented successfully.");          // Display output result
    }
}
