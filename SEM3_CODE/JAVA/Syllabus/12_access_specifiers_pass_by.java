class Demo {
    public int pubVal = 10;                                               // Calculate and assign value
    private int privVal = 20;                                             // Calculate and assign value
    final int constant = 100;                                             // Calculate and assign value

    int getPrivate() {                                                    // Declare variable
        return privVal;                                                   // Return computed result privVal
    }
}

class AccessDemo {
    static void modifyVal(int x) {
        x = 999;                                                          // Calculate and assign value
    }

    static void modifyObj(Demo d) {
        d.pubVal = 555;                                                   // Calculate and assign value
    }

    public static void main(String[] args) {
        Demo obj = new Demo();                                            // Instantiate new object
        int primitive = 50;                                               // Initialize variable
        modifyVal(primitive);
        System.out.println("Primitive after call: " + primitive);         // Display primitive after call
        modifyObj(obj);
        System.out.println("Object property after call: " + obj.pubVal);  // Display object property after call
        System.out.println("Private val: " + obj.getPrivate());           // Display private val
    }
}
