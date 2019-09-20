// Runtime: 64 ms, faster than 53.32% of JavaScript online submissions for Detect Capital.
// Memory Usage: 34.3 MB, less than 100.00% of JavaScript online submissions for Detect Capital.

var detectCapitalUse = function(word) {
  var res = true;
  //if last char is upper
  if (word[word.length - 1] == word[word.length - 1].toUpperCase()) {
    for (var i = 0; i < word.length - 1; i++) {
      res &= word[i] == word[i].toUpperCase();
    }
  } //last char is lower
  else {
    for (var i = 1; i < word.length - 1; i++) {
      res &= !(word[i] == word[i].toUpperCase());
    }
  }

  return res;
};
