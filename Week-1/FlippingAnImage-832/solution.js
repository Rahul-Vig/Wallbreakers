//Solution 1
var flipAndInvertImage = function(A) {
  return A.map((row, i) => {
    var end = A.length - 1;

    function reverse(row) {
      for (var j = 0; j < row.length / 2; j++) {
        var temp = row[j];
        row[j] = row[end];
        row[end] = temp;
        end--;
      }
      return row;
    }

    return reverse(row).map(value => {
      return !value;
    });
  });
};

//Solution 2
var flipAndInvertImage = function(A) {
  return A.map(row => {
    return row.reverse().map(value => {
      return !value;
    });
  });
};
