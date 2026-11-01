function calculateFactorial(num) {
    if (num <= 1) return 1;                    // Evaluate comparison condition
    return num * calculateFactorial(num - 1);  // Return computed result
}
let result = calculateFactorial(6);            // Initialize variable
console.log("Factorial of 6 is: " + result);   // Display factorial of 6 is
