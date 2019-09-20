// Runtime: 56 ms, faster than 69.47% of JavaScript online submissions for Binary Gap.
// Memory Usage: 33.9 MB, less than 100.00% of JavaScript online submissions for Binary Gap

var binaryGap = function(N) {
  var maxDistance = 0,
    index = 1,
    last = -1,
    currBit;

  while (N > 0) {
    currBit = N % 2;

    if (currBit == 1) {
      if (last >= 0) maxDistance = Math.max(maxDistance, index - last);
      last = index;
    }

    index++;
    N = parseInt(N / 2);
  }

  return maxDistance;
};
