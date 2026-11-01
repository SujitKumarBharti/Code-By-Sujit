let num = 29;                                                  // Initialize variable
let isPrime = num > 1;                                         // Initialize variable
for (let i = 2; i * i <= num; i++) {                           // Loop through elements
    if (num % i === 0) {                                       // Check if value equals zero
        isPrime = false;                                       // Calculate and assign value
        break;                                                 // Exit loop or switch block
    }
}
console.log(num + (isPrime ? " is prime" : " is not prime"));  // Display is prime
