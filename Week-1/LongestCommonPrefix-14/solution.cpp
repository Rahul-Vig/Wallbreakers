// Used some help from GeekstoGeeks to solve the problem
// Runtime: 4 ms, faster than 94.92% of C++ online submissions for Longest Common Prefix.
// Memory Usage: 8.9 MB, less than 48.39% of C++ online submissions for Longest Common Prefix.

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        //if the size of the vector is 0 there is no common prefix
        if (strs.size() == 0)
            return "";

        //if the size of the vector is 1 the common prefix is the only string in the vector
        if (strs.size() == 1)
            return strs[0];

        //Sort the strings alphabetically
        std::sort(strs.begin(), strs.end());

        //find the minimum length between the first and last string
        int minLength = std::min(strs[0].size(), strs[strs.size() - 1].size());

        //the longest common prefix will now be contained in both the first and last strings if it exists
        string first = strs[0], last = strs[strs.size() - 1];

        //use a for loop to find the point in which the strings are not equal
        int i;
        for (i = 0; i < minLength && first[i] == last[i]; i++)
            ;

        //the prefix is the substring between 0 & i
        string prefix = first.substr(0, i);

        return prefix;
    }
};