function isPrime(num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 === 0 || num % 3 === 0) return false;
    for (let i = 5; i * i <= num; i += 6) {
        if (num % i === 0 || num % (i + 2) === 0) return false;
    }
    return true;
}

const testNumbers = [2, 17, 24, 29, 35, 97];
testNumbers.forEach(n => {
    console.log(`${n} is prime?`, isPrime(n));
});
