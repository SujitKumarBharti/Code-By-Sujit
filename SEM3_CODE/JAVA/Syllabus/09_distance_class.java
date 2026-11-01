class Distance {
    int feet;                                                          // Declare variable
    int inches;                                                        // Declare variable

    void setDistance(int f, int in) {                                  // Declare variable
        this.feet = f;                                                 // Calculate and assign value
        this.inches = in;                                              // Calculate and assign value
    }

    void display() {                                                   // Declare variable
        System.out.println(this.feet + " ft " + this.inches + " in");  // Display ft
    }
}

class DistanceDemo {
    public static void main(String[] args) {
        Distance d = new Distance();                                   // Instantiate new object
        d.setDistance(5, 8);
        d.display();                                                   // Call member function display()
    }
}
