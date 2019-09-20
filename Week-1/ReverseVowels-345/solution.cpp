// Runtime: 12 ms, faster than 62.96% of C++ online submissions for Reverse Vowels of a String.
// Memory Usage: 10 MB, less than 87.88% of C++ online submissions for Reverse Vowels of a String.

class Solution
{
public:
    string reverseVowels(string s)
    {
        int start = 0;
        int end = s.length() - 1;

        while (start < end)
        {

            while (start < end && !isVowel(s[start]))
                start++;
            while (start < end && !isVowel(s[end]))
                end--;

            if (isVowel(s[start]) && isVowel(s[end]))
            {
                int temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }
        }

        return s;
    }

    bool isVowel(char c)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        return false;
    }
};