// Runtime: 16 ms, faster than 97.17% of C++ online submissions for Reverse Words in a String III.
// Memory Usage: 11.7 MB, less than 91.30% of C++ online submissions for Reverse Words in a String III.

class Solution
{
public:
    string reverseWords(string s)
    {

        //declare an int to keep track of the start index of each word.
        int first = 0;

        //iterate through the entire string including past the last character in order to get the last word
        for (int i = 0; i <= s.length(); i++)
        {
            //if our index has reached one past the length of the string, we are at the end and have to reverse the final word
            if (i == s.length() || s[i] == ' ')
            {
                reverse(s, first, i - 1);
                first = i + 1; //change first to what i is + 1 in order to get start index of next word.
            }
        }

        return s;
    }

    void reverse(string &s, int start, int end)
    {
        while (start < end)
        {
            int temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }
};
