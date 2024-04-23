function removeDuplicates(nums) {
    for (let i = 0; i < nums.length; i++) {
      if (nums[i] === nums[i + 1]) {
        nums.splice(i, 1)
        i--
      }
    }
    return nums.length
  }

  // Question One (1) Remove Duplicates from Sorted Array
let test = removeDuplicates([9, 9, 1]
console.log(test) // 2
