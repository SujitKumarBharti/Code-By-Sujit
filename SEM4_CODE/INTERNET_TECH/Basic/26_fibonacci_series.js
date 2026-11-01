function generateFibonacci(terms) {
    const series = [];
    let a = 0, b = 1;
    for (let i = 0; i < terms; i++) {
        series.push(a);
        let next = a + b;
        a = b;
        b = next;
    }
    return series;
}

const terms = 10;
console.log(`Fibonacci Series (${terms} terms):`, generateFibonacci(terms).join(", "));
