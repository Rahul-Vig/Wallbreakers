// Runtime: 64 ms, faster than 56.83% of JavaScript online submissions for Fizz Buzz.
// Memory Usage: 37.4 MB, less than 55.00% of JavaScript online submissions for Fizz Buzz.

var fizzBuzz = function(n) {
  let fizzbuzz = [];

  for (var i = 1; i <= n; i++) {
    if (i % 3 == 0 && i % 5 == 0) fizzbuzz.push("FizzBuzz");
    else if (i % 3 == 0) fizzbuzz.push("Fizz");
    else if (i % 5 == 0) fizzbuzz.push("Buzz");
    else fizzbuzz.push(i.toString());
  }

  return fizzbuzz;
};
