function reverseString(str) {
    let reversed = "";
    for (let i = str.length - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

function reverseArrayInPlace(arr) {
    let left = 0;
    let right = arr.length - 1;
    while (left < right) {
        let temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    return arr;
}

const originalString = "JavaScript";
console.log(`Original String: '${originalString}' -> Reversed: '${reverseString(originalString)}'`);

const originalArray = [10, 20, 30, 40, 50];
console.log("Original Array :", originalArray);
reverseArrayInPlace(originalArray);
console.log("Reversed In-Place:", originalArray);
