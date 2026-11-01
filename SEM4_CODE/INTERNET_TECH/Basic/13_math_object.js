console.log("Math.PI      :", Math.PI);
console.log("Math.round(4.7) :", Math.round(4.7));
console.log("Math.floor(4.9) :", Math.floor(4.9));
console.log("Math.ceil(4.1)  :", Math.ceil(4.1));
console.log("Math.pow(2, 8)  :", Math.pow(2, 8));
console.log("Math.sqrt(64)   :", Math.sqrt(64));
console.log("Math.abs(-42)   :", Math.abs(-42));
console.log("Math.min(10, 5, 20) :", Math.min(10, 5, 20));
console.log("Math.max(10, 5, 20) :", Math.max(10, 5, 20));

function getRandomInt(min, max) {            // Random integer between min and max (inclusive)
    return Math.floor(Math.random() * (max - min + 1)) + min;
}

console.log("Random int (1 to 100):", getRandomInt(1, 100));
