class Q112_SumArrayReference {
    static int sumElements(int[] ref) {
        int sum = 0;                                                                             // Initialize variable
        for (int x : ref) sum += x;                                                              // Iterate through loop
        return sum;
    }

    public static void main(String[] args) {
        int[] data = {12, 18, 24, 30, 36};                                                       // Perform calculation
        System.out.println("Sum of array elements via reference method: " + sumElements(data));  // Display find the sum of array elements u... result
    }
}
