function divide(a, b) {
    if (typeof a !== "number" || typeof b !== "number") {
        throw new TypeError("Both arguments must be valid numbers.");
    }
    if (b === 0) {
        throw new RangeError("Division by zero is not allowed.");
    }
    return a / b;
}

try {
    console.log("Dividing 10 / 2:", divide(10, 2));
    console.log("Attempting 10 / 0:");
    divide(10, 0);
} catch (error) {
    console.error(`Caught [${error.name}]: ${error.message}`);
} finally {
    console.log("Finally block executed (cleanup actions completed).");
}
