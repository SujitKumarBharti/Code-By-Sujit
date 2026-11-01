let num = 10;                                                                    // Demonstrates loose equality (==) vs strict equality (===) and boolean logic
let strNum = "10";

console.log("num == strNum  (Loose equality, value only) :", num == strNum);     // true
console.log("num === strNum (Strict equality, value & type):", num === strNum);  // false

console.log("10 != '10'  (Loose inequality)  :", num != strNum);                 // false
console.log("10 !== '10' (Strict inequality) :", num !== strNum);                // true

let age = 22;                                                                    // Logical Operators
let hasID = true;

console.log("Logical AND (&&):", age >= 18 && hasID);
console.log("Logical OR  (||):", age < 18 || hasID);
console.log("Logical NOT (!) :", !hasID);
