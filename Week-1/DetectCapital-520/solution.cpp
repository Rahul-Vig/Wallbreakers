// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Detect Capital.
// Memory Usage: 8.1 MB, less than 100.00% of C++ online submissions for Detect Capital.
#include <ctype.h>

class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        bool res = true;
        if (isupper(word[word.length() - 1]))
        {
            for (int i = 0; i < word.length() - 1; ++i)
            {
                res &= (isupper(word[i]) != 0);
            }
        }
        else
        {
            for (int i = 1; i < word.length() - 1; ++i)
            {
                res &= (!isupper(word[i]) != 0);
            }
        }
        return res;
    }
};

// Runtime: 4 ms, faster than 56.11% of C++ online submissions for Detect Capital.
// Memory Usage: 8.1 MB, less than 100.00% of C++ online submissions for Detect Capital.

class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int capCount = 0;
        for (int i = 0; i < word.length(); i++)
        {
            if ((int)word[i] >= 65 && (int)word[i] <= 90)
                capCount++;
        }

        cout << capCount << endl;

        if (capCount == word.length())
            return true;
        else if (capCount > 1 && capCount < word.length())
            return false;
        else if (capCount == 1 && (int)word[0] >= 65 && (int)word[0] <= 90)
            return true;
        else if (capCount == 0)
            return true;
        else
            return false;
    }
};
