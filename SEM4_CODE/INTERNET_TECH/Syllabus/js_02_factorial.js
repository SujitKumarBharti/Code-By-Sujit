let n = 5;                                          // Initialize variable
let fact = 1;                                       // Initialize variable
for (let i = 1; i <= n; i++) {                      // Loop through elements
    fact *= i;                                      // Accumulate updated value
}
console.log("Factorial of " + n + " is: " + fact);  // Display factorial of
