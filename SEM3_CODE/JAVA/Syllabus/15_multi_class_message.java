import java.util.Scanner;

class MessagePrinter {
    void printMessage(String msg) {                                       // Declare variable
        System.out.println("User message: " + msg);                       // Display user message
    }
}

class MultiClassMessage {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);                              // Instantiate new object
        System.out.print("Enter text message: ");                         // Prompt user to enter text message
        String msg = sc.hasNextLine() ? sc.nextLine() : "Default Hello";  // Read input from scanner
        MessagePrinter printer = new MessagePrinter();                    // Instantiate new object
        printer.printMessage(msg);
    }
}
