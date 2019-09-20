// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number Complement.
// Memory Usage: 8.2 MB, less than 100.00% of C++ online submissions for Number Complement.

class Solution
{
public:
    int findComplement(int num)
    {
        int count = 0; //used to get the number of bits in the num
        int temp = num;

        while (temp > 0)
        {
            temp /= 2;
            count++;
        }
        num <<= 32 - count; //left shift our num by 32-count since it's a 32 bit representation;
        num = ~num;         //get the complement of num;
        num >>= 32 - count; //right shift our num by 32-count to get back to the original position

        return num;
    }
};