function isPalindromeString(str) {
    const cleanStr = str.toLowerCase().replace(/[^a-z0-9]/g, "");
    const reversed = cleanStr.split("").reverse().join("");
    return cleanStr === reversed;
}

function isPalindromeNumber(num) {
    let temp = num;
    let rev = 0;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp = Math.floor(temp / 10);
    }
    return num === rev;
}

console.log("'madam' is palindrome?          :", isPalindromeString("madam"));
console.log("'race a car' is palindrome?     :", isPalindromeString("race a car"));
console.log("Number 12321 is palindrome?     :", isPalindromeNumber(12321));
