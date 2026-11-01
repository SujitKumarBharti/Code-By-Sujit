class InvalidAgeException extends Exception {
    public InvalidAgeException(String msg) {
        super(msg);
    }
}

class CustomExceptionDemo {
    static void checkAge(int age) throws InvalidAgeException {
        if (age < 18) {                                                        // Evaluate comparison condition
            throw new InvalidAgeException("Not eligible for voting");          // Instantiate new object
        }
        System.out.println("Eligible for voting");                             // Display eligible for voting
    }

    public static void main(String[] args) {
        try {
            checkAge(15);
        } catch (InvalidAgeException e) {
            System.out.println("Caught custom exception: " + e.getMessage());  // Display caught custom exception
        }
    }
}
