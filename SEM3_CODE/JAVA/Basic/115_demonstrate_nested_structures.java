class Q115_NestedStructures {
    static class Address {
        String city;
        String state;
        Address(String c, String s) { this.city = c; this.state = s; }  // Perform calculation
    }

    static class Person {
        String name;
        int age;                                                        // Declare variables for calculation
        Address address;

        Person(String n, int a, Address addr) {
            this.name = n;                                              // Perform calculation
            this.age = a;                                               // Perform calculation
            this.address = addr;                                        // Perform calculation
        }
    }

    public static void main(String[] args) {
        Address addr = new Address("Ranchi", "Jharkhand");              // Perform calculation
        Person p = new Person("Sujit", 20, addr);                       // Perform calculation

        System.out.println("Person Details:");                          // Display demonstrate nested structures (n... result
        System.out.println("Name : " + p.name);                         // Display demonstrate nested structures (n... result
        System.out.println("Age  : " + p.age);                          // Display demonstrate nested structures (n... result
        System.out.println("City : " + p.address.city);                 // Display demonstrate nested structures (n... result
        System.out.println("State: " + p.address.state);                // Display demonstrate nested structures (n... result
    }
}
