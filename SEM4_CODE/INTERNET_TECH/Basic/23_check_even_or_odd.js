function checkEvenOrOdd(n) {
    if (n % 2 === 0) {
        return `${n} is Even`;
    } else {
        return `${n} is Odd`;
    }
}

console.log(checkEvenOrOdd(42));
console.log(checkEvenOrOdd(17));
