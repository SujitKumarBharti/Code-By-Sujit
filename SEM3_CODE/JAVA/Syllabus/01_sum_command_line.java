class SumCommandLine {
    public static void main(String[] args) {
        int sum = 0;                                     // Initialize variable
        for (String arg : args) {                        // Loop through elements
            sum += Integer.parseInt(arg);                // Accumulate updated value
        }
        System.out.println("Sum of arguments: " + sum);  // Display sum of arguments
    }
}
