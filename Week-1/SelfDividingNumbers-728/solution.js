// Runtime: 64 ms, faster than 55.31% of JavaScript online submissions for Self Dividing Numbers.
// Memory Usage: 35.5 MB, less than 76.92% of JavaScript online submissions for Self Dividing Numbers.

var selfDividingNumbers = function(left, right) {
  var sdn = [];

  var n = left;

  while (left <= right) {
    let digit = n % 10;

    if (digit == 0 || left % digit !== 0) {
      ++left;
      n = left;
      continue;
    }

    n = parseInt(n / 10);

    if (n == 0) {
      sdn.push(left);
      ++left;
      n = left;
    }
  }

  return sdn;
};
