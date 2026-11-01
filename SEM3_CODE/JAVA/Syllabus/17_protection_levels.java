class BaseProtection {
    public int publicVar = 1;                                               // Calculate and assign value
    protected int protectedVar = 2;                                         // Calculate and assign value
    int defaultVar = 3;                                                     // Initialize variable
    private int privateVar = 4;                                             // Calculate and assign value

    public void showSelf() {
        System.out.println("Private visible inside class: " + privateVar);  // Display private visible inside class
    }
}

class SubProtection extends BaseProtection {
    public void testAccess() {
        System.out.println("Public: " + publicVar);                         // Display public
        System.out.println("Protected: " + protectedVar);                   // Display protected
        System.out.println("Default: " + defaultVar);                       // Display default
    }
}

class ProtectionDemo {
    public static void main(String[] args) {
        SubProtection sub = new SubProtection();                            // Instantiate new object
        sub.testAccess();
        sub.showSelf();
    }
}
