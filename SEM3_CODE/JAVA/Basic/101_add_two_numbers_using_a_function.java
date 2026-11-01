class Q101_AddWithFunction {
    static int add(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) {
        int x = 40, y = 60;                                     // Initialize variable
        System.out.println(x + " + " + y + " = " + add(x, y));  // Display add two numbers using a function result
    }
}
