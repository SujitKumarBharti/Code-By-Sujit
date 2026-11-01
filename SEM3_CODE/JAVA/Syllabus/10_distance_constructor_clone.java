class DistanceCloneData {
    int feet, inches;                                         // Declare variable

    DistanceCloneData(int f, int in) {
        feet = f;                                             // Calculate and assign value
        inches = in;                                          // Calculate and assign value
    }

    DistanceCloneData(DistanceCloneData d) {
        feet = d.feet;                                        // Calculate and assign value
        inches = d.inches;                                    // Calculate and assign value
    }

    void show() {                                             // Declare variable
        System.out.println(feet + " ft " + inches + " in");   // Display ft
    }
}

class DistanceCloneDemo {
    public static void main(String[] args) {
        DistanceCloneData d1 = new DistanceCloneData(10, 4);  // Instantiate new object
        DistanceCloneData d2 = d1;                            // Calculate and assign value
        DistanceCloneData d3 = new DistanceCloneData(d1);     // Instantiate new object
        d1.show();                                            // Call member function show()
        d2.show();                                            // Call member function show()
        d3.show();                                            // Call member function show()
    }
}
