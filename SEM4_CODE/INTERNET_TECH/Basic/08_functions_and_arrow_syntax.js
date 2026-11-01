function calculateArea(width, height = 10) {  // Function Declaration
    return width * height;
}

const multiply = function(a, b) {             // Function Expression
    return a * b;
};

const add = (a, b) => a + b;                  // Arrow Function (concise syntax)
const square = x => x * x;

console.log("Function Declaration : area(5, 4) =", calculateArea(5, 4));
console.log("Default Parameter    : area(5)    =", calculateArea(5));
console.log("Function Expression  : 6 * 7      =", multiply(6, 7));
console.log("Arrow Function       : 15 + 25    =", add(15, 25));
console.log("Single-param Arrow   : 9 squared  =", square(9));
