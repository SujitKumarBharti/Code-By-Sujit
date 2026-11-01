import java.util.Arrays;

class Q088_SortStrings {
    public static void main(String[] args) {
        String[] words = {"Banana", "Apple", "Mango", "Cherry", "Date"};  // Perform calculation
        System.out.println("Original: " + Arrays.toString(words));        // Display sort strings alphabetically result
        Arrays.sort(words);
        System.out.println("Sorted  : " + Arrays.toString(words));        // Display sort strings alphabetically result
    }
}
