function bubbleSort(arr) {
    const a = [...arr];                                   // clone
    const n = a.length;
    for (let i = 0; i < n - 1; i++) {
        for (let j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                let temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return a;
}

const unsorted = [64, 34, 25, 12, 22, 11, 90];
console.log("Unsorted Array           :", unsorted);
console.log("Bubble Sorted Array      :", bubbleSort(unsorted));

const jsSortedAsc = [...unsorted].sort((a, b) => a - b);  // JavaScript built-in numerical sort with comparator function (a - b)
const jsSortedDesc = [...unsorted].sort((a, b) => b - a);
console.log("Ascending (Built-in Sort) :", jsSortedAsc);
console.log("Descending (Built-in Sort):", jsSortedDesc);
