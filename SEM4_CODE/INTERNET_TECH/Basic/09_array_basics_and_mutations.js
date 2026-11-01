let fruits = ["Apple", "Banana", "Cherry"];
console.log("Initial array:", fruits);

fruits.push("Date");                             // push: add to end
console.log("After push('Date')    :", fruits);

let popped = fruits.pop();                       // pop: remove from end
console.log(`After pop() (removed ${popped}):`, fruits);

fruits.unshift("Mango");                         // unshift: add to start
console.log("After unshift('Mango'):", fruits);

let shifted = fruits.shift();                    // shift: remove from start
console.log(`After shift() (removed ${shifted}):`, fruits);

fruits.splice(1, 0, "Kiwi", "Orange");           // splice: insert or remove at specific index
console.log("After splice insert   :", fruits);  // splice(start, deleteCount, item1, item2...)

let sub = fruits.slice(1, 3);                    // slice: non-mutating sub-array copy
console.log("slice(1, 3) copy      :", sub);
