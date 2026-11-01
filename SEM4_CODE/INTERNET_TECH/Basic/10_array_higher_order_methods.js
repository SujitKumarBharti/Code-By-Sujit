const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
console.log("Original numbers:", numbers);

const squares = numbers.map(n => n * n);                           // map: transform each element
console.log("Squares (map)         :", squares);

const evens = numbers.filter(n => n % 2 === 0);                    // filter: select elements satisfying condition
console.log("Even numbers (filter) :", evens);

const totalSum = numbers.reduce((acc, curr) => acc + curr, 0);     // reduce: accumulate to single value
console.log("Sum (reduce)          :", totalSum);

const firstGreaterThanFive = numbers.find(n => n > 5);             // find: first matching element
console.log("First > 5 (find)      :", firstGreaterThanFive);

console.log("Has negative? (some)  :", numbers.some(n => n < 0));  // some & every: boolean tests
console.log("All positive? (every) :", numbers.every(n => n > 0));
