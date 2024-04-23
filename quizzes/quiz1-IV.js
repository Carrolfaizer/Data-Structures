function findSingleNumber(nums) {
    let result = 0;
    for (let num of nums) {
        result ^= num;
    }
    return result;
}

// Example usage:
const nums = [4, 1, 2, 1, 2];
console.log("Single number:", findSingleNumber(nums)); // Output: 4

