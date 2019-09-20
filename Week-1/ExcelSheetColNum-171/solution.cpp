// Runtime: 4 ms, faster than 71.66% of C++ online submissions for Excel Sheet Column Number.
// Memory Usage: 8.3 MB, less than 53.06% of C++ online submissions for Excel Sheet Column Number.

#include <math.h>

class Solution
{
public:
    int titleToNumber(string s)
    {
        int num = 0;

        int i, j;
        for (i = s.length() - 1, j = 0; i >= 0; i--, j++)
        {
            num += ((int)s[j] % 64) * pow(26, i);
        }

        return num;
    }
};