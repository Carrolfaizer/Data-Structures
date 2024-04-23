function rotateArray(nums, k) {
    const n = nums.length;
    k = k % n; // handle cases where k > n

    // Reverse the entire array
    reverse(nums, 0, n - 1);
    
    // Reverse the first k elements
    reverse(nums, 0, k - 1);
    
    // Reverse the remaining elements
    reverse(nums, k, n - 1);
    
    return nums;
}

function reverse(nums, start, end) {
    while (start < end) {
        const temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

// Example usage:
const nums = [1, 2, 3, 4, 5];
const k = 2;
console.log("Original array:", nums);
console.log("Rotated array:", rotateArray(nums, k));

