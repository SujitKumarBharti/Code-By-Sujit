let num = 153;                                                             // Initialize variable
let sum = 0;                                                               // Initialize variable
let temp = num;                                                            // Initialize variable
while (temp > 0) {                                                         // Iterate while condition holds
    let rem = temp % 10;                                                   // Initialize variable
    sum += rem * rem * rem;                                                // Accumulate updated value
    temp = Math.floor(temp / 10);                                          // Swap value using temporary variable
}
console.log(num + (sum === num ? " is Armstrong" : " is not Armstrong"));  // Display is armstrong
