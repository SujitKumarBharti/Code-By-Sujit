function findLargest(arr) {
    let maxVal = arr[0];                                   // Initialize variable
    for (let val of arr) {                                 // Loop through elements
        if (val > maxVal) maxVal = val;                    // Evaluate comparison condition
    }
    return maxVal;                                         // Return computed result maxVal
}
let numbers = [12, 77, 34, 99, 56];                        // Initialize variable
console.log("Largest in array: " + findLargest(numbers));  // Display largest in array
