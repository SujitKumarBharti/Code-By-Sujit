const now = new Date();

console.log("Current Full Date/Time:", now.toString());
console.log("ISO String             :", now.toISOString());
console.log("Locale Date String     :", now.toLocaleDateString());
console.log("Locale Time String     :", now.toLocaleTimeString());
console.log("Year                   :", now.getFullYear());
console.log("Month (0-indexed)      :", now.getMonth(), `(${now.getMonth() + 1}th month)`);
console.log("Date of Month          :", now.getDate());
console.log("Day of Week (0=Sun)    :", now.getDay());
console.log("Epoch Timestamp (ms)   :", now.getTime());
