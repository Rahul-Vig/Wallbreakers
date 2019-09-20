// Runtime: 48 ms, faster than 93.33% of JavaScript online submissions for Hamming Distance.
// Memory Usage: 33.8 MB, less than 62.50% of JavaScript online submissions for Hamming Distance.

var hammingDistance = function(x, y) {
  let count = 0;
  while (x > 0 || y > 0) {
    if (x % 2 != y % 2) count++;
    x = parseInt(x / 2);
    y = parseInt(y / 2);
  }

  return count;
};
