//Simple but not very efficient at all
// Runtime: 4 ms, faster than 57.00% of C++ online submissions for Power of Two.
// Memory Usage: 8.4 MB, less than 6.00% of C++ online submissions for Power of Two.

#include <tgmath.h>
#include <math.h>

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        return (floor(log2(n)) - log2(n)) == 0;
    }
};

//Efficient solution
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Power of Two.
// Memory Usage: 8 MB, less than 100.00% of C++ online submissions for Power of Two.

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {

        if (n <= 0)
            return false;

        while (n > 2)
        {
            if (n % 2 != 0)
            {
                return false;
            }
            n /= 2;
        }
        return true;
    }
};