let words = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"];  // Initialize variable
let numStr = "123";                                                                            // Initialize variable
let result = "";                                                                               // Initialize variable
for (let ch of numStr) {                                                                       // Loop through elements
    result += words[parseInt(ch)] + " ";                                                       // Accumulate updated value
}
console.log("In words: " + result.trim());                                                     // Display in words
