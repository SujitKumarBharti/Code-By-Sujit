const [first, second, ...restNums] = [10, 20, 30, 40, 50];                               // Array Destructuring
console.log("Array Destructuring: first =", first, ", second =", second, ", rest =", restNums);

const user = { id: 1, username: "sujit_k", email: "sujit@example.com", role: "Admin" };  // Object Destructuring
const { username, role } = user;
console.log("Object Destructuring: username =", username, ", role =", role);

const frontEnd = ["HTML", "CSS", "JS"];                                                  // Spread operator (combining arrays)
const backEnd = ["Node.js", "Express", "SQL"];
const fullStack = [...frontEnd, ...backEnd];
console.log("Spread Arrays:", fullStack);

const updatedUser = { ...user, status: "Active", lastLogin: "Today" };                   // Spread operator (cloning and extending objects)
console.log("Spread Object:", updatedUser);
