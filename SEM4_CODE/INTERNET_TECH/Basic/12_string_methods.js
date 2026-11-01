let text = "  Welcome to JavaScript Programming!  ";
console.log(`Original Text: '${text}'`);

console.log("length         :", text.length);
console.log("trim()         :", `'${text.trim()}'`);
console.log("toUpperCase()  :", text.toUpperCase());
console.log("toLowerCase()  :", text.toLowerCase());
console.log("indexOf('Java'):", text.indexOf("Java"));
console.log("includes('Web'):", text.includes("Web"));
console.log("slice(13, 23)  :", text.slice(13, 23));
console.log("replace()      :", text.replace("JavaScript", "Web Development"));
console.log("split(' ')     :", text.trim().split(" "));
