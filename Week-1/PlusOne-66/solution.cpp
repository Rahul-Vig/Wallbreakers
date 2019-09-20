// Runtime: 4 ms, faster than 65.42% of C++ online submissions for Plus One.
// Memory Usage: 8.5 MB, less than 98.36% of C++ online submissions for Plus One

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        //initialize a variable to see if the last digit is 9
        int end = digits.size() - 1;

        if (digits[end] == 9)
        {
            //if the last digit is 9 and the size is 1 then we can skip the while loop below

            if (digits.size() == 1 && digits[end] == 9)
            {
                digits[end] = 0;
                end--;
            }

            else
            {
                //if the array is greater than size 1 then we start from the last index and keep checking to see if each prev value is > 9
                while (digits[end] + 1 > 9)
                {
                    digits[end] = 0; //changed each 9 to 0 and carry the one until there are no more 9's
                    end--;
                    if (end < 0)
                        break;
                }
            }

            if (end < 0)
            {
                if (end < 0)
                    end = 0;
                digits.insert(digits.begin(), 1);
            }
            else
            {
                digits[end]++;
            }
        }
        else
        {
            digits[end]++;
        }

        return digits;
    }
};
