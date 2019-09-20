// Runtime: 8 ms, faster than 97.89% of C++ online submissions for Valid Anagram.
// Memory Usage: 9.4 MB, less than 88.06% of C++ online submissions for Valid Anagram.

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false; //if the two strings are not the same length they cannot possibly be an anagram of each other

        int letters[26] = {0}; //create an array of size 26 to hold all letters of the alphabet

        for (int i = 0; i < s.size(); i++)
        {
            letters[s[i] - 'a']++; //for each letter in s we increment the value of letters by 1
            letters[t[i] - 'a']--; //since its an anagram each letter that occurs in s must also be in t, so to check this we
            //decrement letters by 1 for each letter than occurs in both s and t
        }

        for (int i = 0; i < 26; i++)
        {
            if (letters[i] != 0)
                return false; //if there is a element of letters that is > 0 that means there was a letter unique to one of the strings and
            //so it cannot possibly be an anagram
        }

        return true;
    }
};