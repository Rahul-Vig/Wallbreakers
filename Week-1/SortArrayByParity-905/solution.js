//Inefficient but convenient solution
var sortArrayByParity = function(A) {
  return A.sort((a, b) => {
    return (a % 2) - (b % 2);
  });
};

//Slightly more efficient
//Runtime 80 ms faster than 58.91%
//Memory usage 37.3 MB less than 24%

var sortArrayByParity = function(A) {
  const even = [];
  const odd = [];

  A.map(num => {
    if (num % 2 == 0) even.push(num);
    else odd.push(num);
  });

  return even.concat(odd);
};

//Even faster
//Runtime 76 ms faster than 77.67%
//Memuse 37 MB less than 40%
var sortArrayByParity = function(A) {
  const even = [];
  const odd = [];

  for (var i = 0; i < A.length; i++) {
    if ((A[i] & 1) === 0) even.push(A[i]);
    else odd.push(A[i]);
  }

  return even.concat(odd);
};
