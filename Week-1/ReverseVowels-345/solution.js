// Runtime: 80 ms, faster than 60.33% of JavaScript online submissions for Reverse Vowels of a String.
// Memory Usage: 38.3 MB, less than 92.86% of JavaScript online submissions for Reverse Vowels of a Strin

function isVowel(c) {
  if (
    c == "a" ||
    c == "e" ||
    c == "i" ||
    c == "o" ||
    c == "u" ||
    c == "A" ||
    c == "E" ||
    c == "I" ||
    c == "O" ||
    c == "U"
  )
    return true;
  return false;
}

var reverseVowels = function(s) {
  let start = 0;
  let end = s.length - 1;

  s = s.split("");

  while (start < end) {
    while (start < end && !isVowel(s[start])) start++;
    while (start < end && !isVowel(s[end])) end--;

    if (isVowel(s[start]) && isVowel(s[end])) {
      var temp = s[start];
      s[start] = s[end];
      s[end] = temp;
      start++;
      end--;
    }
  }

  return s.join("");
};
