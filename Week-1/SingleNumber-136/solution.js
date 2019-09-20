// Runtime: 52 ms, faster than 94.41% of JavaScript online submissions for Single Number.
// Memory Usage: 35.4 MB, less than 76.92% of JavaScript online submissions for Single Number.

var singleNumber = function(nums) {
  var singleNum = 0;
  for (var i = 0; i < nums.length; i++) {
    singleNum ^= nums[i];
  }

  return singleNum;
};
