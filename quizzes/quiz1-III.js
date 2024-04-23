function containsDuplicate(nums) {
    const numSet = new Set();

    for (let num of nums) {
        if (numSet.has(num)) {
            return true; // Found a duplicate
        }
        numSet.add(num);
    }

    return false; // No duplicates found
}

// Example usage:
const nums1 = [1, 2, 3, 1];
console.log("Contains duplicates:", containsDuplicate(nums1)); // Output: true

const nums2 = [1, 2, 3, 4];
console.log("Contains duplicates:", containsDuplicate(nums2)); // Output: false

