// Runtime: 72 ms, faster than 56.54% of JavaScript online submissions for Two Sum.
// Memory Usage: 34.4 MB, less than 88.84% of JavaScript online submissions for Two Sum.

var twoSum = function(nums, target) {
  let map = {};
  for (var i = 0; i < nums.length; i++) {
    if (target - nums[i] in map) {
      return [map[target - nums[i]], i];
    }

    map[nums[i]] = i;
  }

  return [];
};
