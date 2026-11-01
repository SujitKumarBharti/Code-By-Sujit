import java.util.Arrays;

class Q090_KthLargestElement {
    public static void main(String[] args) {
        int[] arr = {12, 3, 5, 7, 19, 26, 4};                                                  // Perform calculation
        int k = 3;                                                                             // Initialize variable
        Arrays.sort(arr);

        if (k > 0 && k <= arr.length) {                                                        // Check condition
            System.out.println("The " + k + "th largest element is: " + arr[arr.length - k]);  // Display find the Kth largest element in ... result
        } else {
            System.out.println("Invalid K value.");                                            // Display error message for invalid input
        }
    }
}
