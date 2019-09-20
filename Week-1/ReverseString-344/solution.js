// Runtime: 112 ms, faster than 71.90% of JavaScript online submissions for Reverse String.
// Memory Usage: 46.9 MB, less than 26.67% of JavaScript online submissions for Reverse String.

var reverseString = function(s) {
  var left = 0,
    right = s.length - 1;
  while (left < right) {
    [s[left], s[right]] = [s[right], s[left]];
    left++;
    right--;
  }
};
