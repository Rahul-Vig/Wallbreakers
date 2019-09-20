// Runtime: 64 ms, faster than 92.25% of JavaScript online submissions for Excel Sheet Column Number.
// Memory Usage: 35.5 MB, less than 66.67% of JavaScript online submissions for Excel Sheet Column Number.

var titleToNumber = function(s) {
  var i,
    j,
    num = 0;
  for (i = s.length - 1, j = 0; i >= 0; j++, i--) {
    num += (s.charCodeAt(j) % 64) * Math.pow(26, i);
  }

  return num;
};
