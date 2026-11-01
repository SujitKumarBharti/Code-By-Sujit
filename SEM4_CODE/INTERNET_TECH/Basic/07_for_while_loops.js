console.log("1. Standard for loop:");
for (let i = 1; i <= 5; i++) {
    process.stdout.write(i + " ");
}
console.log();

console.log("2. While loop:");
let w = 5;
while (w > 0) {
    process.stdout.write(w + " ");
    w--;
}
console.log();

console.log("3. For...of loop (arrays):");
const colors = ["Red", "Green", "Blue"];
for (const color of colors) {
    console.log("  Color:", color);
}

console.log("4. For...in loop (object keys):");
const student = { name: "Ankit", roll: 102, stream: "CS" };
for (const key in student) {
    console.log(`  ${key}: ${student[key]}`);
}
