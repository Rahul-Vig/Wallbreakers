// Runtime: 56 ms, faster than 61.45% of JavaScript online submissions for Plus One.
// Memory Usage: 34 MB, less than 12.77% of JavaScript online submissions for Plus One.

var plusOne = function(digits) {
  var carry = true;

  for (var i = digits.length - 1; i >= 0; i--) {
    if (!carry) break;
    carry = parseInt((digits[i] + 1) / 10);
    digits[i] = (digits[i] + 1) % 10;
  }

  if (carry) digits.unshift(1);

  return digits;
};
