//Simple one line solution
// _ allows us to bypass submitting a currentValue for the map function
var transpose = function(A) {
  return A[0].map((_, i) => A.map(col => col[i]));
  //for the length of A[0] which represents the column length we need to now make this the row length
  //map each element using column index and perform another mapping
};

//More logical solution

var transpose = function(A) {
  const transposeMatrix = []; //create 2d array

  for (var i = 0; i < A[0].length; i++) {
    transposeMatrix[i] = [];
    for (var j = 0; j < A.length; j++) {
      transposeMatrix[i].push(A[j][i]);
    }
  }

  return transposeMatrix;
};
