// Runtime: 76 ms, faster than 55.92% of JavaScript online submissions for Valid Anagram.
// Memory Usage: 35.7 MB, less than 93.88% of JavaScript online submissions for Valid Anagram.

var isAnagram = function(s, t) {
  if (s.length != t.length) return false;

  var letters = new Array(26).fill(0);

  for (var i = 0; i < s.length; i++) {
    letters[s[i].charCodeAt(0) - "a".charCodeAt(0)]++;
    letters[t[i].charCodeAt(0) - "a".charCodeAt(0)]--;
  }

  for (var el in letters) {
    if (letters[el] != 0) return false;
  }

  return true;
};
