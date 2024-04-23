function reverseArray(arr) {
    let start = 0;
    let end = arr.length - 1;

    while (start < end) {
        // Swap elements at start and end indices
        let temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move to the next pair of elements
        start++;
        end--;
    }

    return arr;
}

// Example usage
let array = [1, 2, 3, 4, 5];
console.log("Original array:", array);
console.log("Reversed array:", reverseArray(array));

