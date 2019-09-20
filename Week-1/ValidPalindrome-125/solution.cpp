// Runtime: 4 ms, faster than 99.16% of C++ online submissions for Valid Palindrome.
// Memory Usage: 9.4 MB, less than 59.18% of C++ online submissions for Valid Palindrome.

#include <cctype>

class Solution
{
public:
    bool isPalindrome(string s)
    {

        int start = 0;            //keep track of first half of string
        int end = s.length() - 1; //keep track of second half of string

        //continue until start and end meet in the middle
        while (start < end)
        {
            //if the char at index start is anything but an alphanumeric then we should increment start because we only wanna compare letters.
            if (!isalnum(s[start]))
            {
                start++;
                continue;
            }

            //if the char at index end is anything but an alphanumeric then we should decrement end because we only wanna compare letters.
            if (!isalnum(s[end]))
            {
                end--;
                continue;
            }

            //if(the letters dont match at start and end then it is not a palindrome)
            if (toupper(s[start]) != toupper(s[end]))
                return false;

            start++;
            end--;
        }
        return true;
    }
};