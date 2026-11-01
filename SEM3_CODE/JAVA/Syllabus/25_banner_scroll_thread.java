class BannerScrollThread {
    public static void main(String[] args) {
        String msg = " Jharkhand Raksha Shakti University ";  // Initialize variable
        System.out.println("Simulating banner scroll:");      // Display simulating banner scroll
        for (int i = 0; i < 5; i++) {                         // Loop through elements
            msg = msg.substring(1) + msg.charAt(0);           // Calculate and assign value
            System.out.println(msg);                          // Display output result
        }
    }
}
