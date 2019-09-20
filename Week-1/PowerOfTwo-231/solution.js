// Runtime: 68 ms, faster than 83.27% of JavaScript online submissions for Power of Two.
// Memory Usage: 35.5 MB, less than 69.23% of JavaScript online submissions for Power of Two.
var isPowerOfTwo = function(n) {
  if (n <= 0) return false;

  while (n > 2) {
    if (n % 2 != 0) return false;
    n /= 2;
  }

  return true;
};
