import java.util.Arrays;

class Q078_CopyArray {
    public static void main(String[] args) {
        int[] src = {10, 20, 30, 40, 50};                        // Perform calculation
        int[] dest = new int[src.length];                        // Perform calculation
        for (int i = 0; i < src.length; i++) dest[i] = src[i];   // Iterate through loop
        System.out.println("Source: " + Arrays.toString(src));   // Display copy one array into another result
        System.out.println("Copied: " + Arrays.toString(dest));  // Display copy one array into another result
    }
}
