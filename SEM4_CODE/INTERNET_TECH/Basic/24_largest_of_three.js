function findLargest(a, b, c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

const n1 = 34, n2 = 89, n3 = 56;
console.log(`Largest among ${n1}, ${n2}, and ${n3} is:`, findLargest(n1, n2, n3));
