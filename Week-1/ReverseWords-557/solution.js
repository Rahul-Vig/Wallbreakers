// Runtime: 80 ms, faster than 47.34% of JavaScript online submissions for Reverse Words in a String III.
// Memory Usage: 41.1 MB, less than 95.65% of JavaScript online submissions for Reverse Words in a String III.

var reverseWords = function(s) {
  //first split the string into an array of all the chars
  //then we reverse the chars in the array
  //then we join them into a string
  //then once again we split the string into an array, but by word this time
  //then we join each word with a space;
  return s
    .split("")
    .reverse()
    .join("")
    .split(" ")
    .reverse()
    .join(" ");
};
