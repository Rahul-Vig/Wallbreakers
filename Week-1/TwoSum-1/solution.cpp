// Runtime: 144 ms, faster than 27.92% of C++ online submissions for Two Sum.
// Memory Usage: 9.1 MB, less than 100.00% of C++ online submissions for Two Sum.
//Inefficient solution
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }
};

//More efficient solution using map
// Runtime: 8 ms, faster than 92.50% of C++ online submissions for Two Sum.
// Memory Usage: 10.1 MB, less than 51.23% of C++ online submissions for Two Sum.

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++)
        {
            if (hash.find(target - nums[i]) != hash.end())
            {
                return {hash[target - nums[i]], i};
            }

            hash[nums[i]] = i;
        }

        return {};
    }
};