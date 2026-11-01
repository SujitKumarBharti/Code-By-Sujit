class CodeDocumentLocation {
    public static void main(String[] args) {
        String codePath = CodeDocumentLocation.class.getProtectionDomain().getCodeSource().getLocation().getPath();  // Initialize variable
        System.out.println("Code location: " + codePath);                                                            // Display code location
        System.out.println("Current dir: " + System.getProperty("user.dir"));                                        // Display current dir
    }
}
