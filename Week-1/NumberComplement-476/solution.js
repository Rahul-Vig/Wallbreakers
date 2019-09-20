// Runtime: 40 ms, faster than 99.71% of JavaScript online submissions for Number Complement.
// Memory Usage: 34.1 MB, less than 100.00% of JavaScript online submissions for Number Complement.

var findComplement = function(num) {
  var count = 0,
    temp = parseInt(num);

  while (temp > 0) {
    temp = parseInt(temp / 2);
    count++;
  }

  num <<= 32 - count;
  num = ~num;
  num >>= 32 - count;

  return num;
};
