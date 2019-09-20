// Runtime: 44 ms, faster than 99.39% of JavaScript online submissions for Longest Common Prefix.
//Memory Usage: 33.8 MB, less than 87.50% of JavaScript online submissions for Longest Common Prefix.

var longestCommonPrefix = function(strs) {
  if (strs.length === 0) return "";
  if (strs.length === 1) return strs[0];

  strs.sort();

  const minLength = Math.min(strs[0].length, strs[strs.length - 1].length);

  var first = strs[0],
    last = strs[strs.length - 1];

  let i = 0;
  while (i < minLength && first[i] == last[i]) i++;

  var prefix = first.substr(0, i);

  return prefix;
};
