// brute force approach O(n^2) time
// checking each value with every other value in the array
var twoSum = function (nums, target) {
  for (let i = 0; i < nums.length - 1; i++) {
    for (let j = 0; j < nums.length; j++) {
      if (j === i) continue;
      if (nums[i] + nums[j] === target) {
        return [i, j];
      }
    }
  }
};

// optimized solution with time complexity of O(nlog(n))
// using a map to store the values
var twoSum = function (nums, target) {
  let map = new Map();
  for (let i = 0; i < nums.length; i++) {
    const diff = target - nums[i];
    if (map.has(diff)) {
      return [map.get(diff), i];
    }
    map.set(nums[i], i);
  }
};
