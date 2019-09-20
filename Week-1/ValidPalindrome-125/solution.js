// Runtime: 72 ms, faster than 65.03% of JavaScript online submissions for Valid Palindrome.
// Memory Usage: 41.9 MB, less than 8.70% of JavaScript online submissions for Valid Palindrome.

var isPalindrome = function(s) {
  var start = 0,
    end = s.length - 1;
  while (start < end) {
    //used regex because isalnum doesn't exist in js
    if (!/^[0-9a-zA-Z]+$/.test(s[start])) {
      start++;
      continue;
    }

    if (!/^[0-9a-zA-Z]+$/.test(s[end])) {
      end--;
      continue;
    }

    if (s[start].toUpperCase() != s[end].toUpperCase()) return false;

    start++;
    end--;
  }

  return true;
};

//The below is not my solution, but it is extremely clever
var isPalindrome = function(s) {
  var strippedString = s.replace(/\W/g, "");
  var reversedString = strippedString
    .split("")
    .reverse()
    .join("");

  return strippedString.toLowerCase() == reversedString.toLowerCase();
};
