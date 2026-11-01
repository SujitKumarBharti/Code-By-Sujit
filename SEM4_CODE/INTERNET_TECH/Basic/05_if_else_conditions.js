let score = 82;
let grade;

if (score >= 90) {
    grade = "A+";
} else if (score >= 75) {
    grade = "A";
} else if (score >= 60) {
    grade = "B";
} else if (score >= 40) {
    grade = "Pass";
} else {
    grade = "Fail";
}

console.log(`Score: ${score} -> Grade: ${grade}`);

let result = score >= 40 ? "QUALIFIED" : "DISQUALIFIED";  // Ternary operator: condition ? exprIfTrue : exprIfFalse
console.log(`Ternary Result: ${result}`);
