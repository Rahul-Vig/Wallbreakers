// Runtime: 12 ms, faster than 96.15% of C++ online submissions for Single Number.
// Memory Usage: 9.6 MB, less than 100.00% of C++ online submissions for Single Number

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        //the idea is to xor each element, since 2 similar numbers will cancel each other out.
        int singleNum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            singleNum ^= nums[i]; //with xor all the similar numbers will cancel each other out and you will be left with the one number that didn't repeat.
        }

        return singleNum;
    }
};
