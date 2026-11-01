let n = 8;                                   // Initialize variable
let a = 0, b = 1;                            // Initialize variable
console.log("Fibonacci Series:");            // Display fibonacci series
for (let i = 0; i < n; i++) {                // Loop through elements
    console.log(a);                          // Display output result
    let next = a + b;                        // Initialize variable
    a = b;                                   // Calculate and assign value
    b = next;                                // Calculate and assign value
}
