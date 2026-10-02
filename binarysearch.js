function binarySearch(numbers, target) {
    let left = 0;
    let right = numbers.length - 1;

    while (left <= right) {
        let middle = Math.floor((left + right) / 2);

        if (numbers[middle] === target) {
            return middle;
        } else if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}

const numbers = [10, 20, 30, 40, 50, 60, 70];
const target = 50;

const result = binarySearch(numbers, target);

if (result !== -1) {
    console.log("Element found at index:", result);
} else {
    console.log("Element not found");
}