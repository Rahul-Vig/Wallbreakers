class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int end = s.size() - 1;
        int temp;
        for (int i = 0; i < s.size() / 2; i++)
        {
            temp = s[i];
            s[i] = s[end];
            s[end] = temp;
            end--;
        }
    }
};