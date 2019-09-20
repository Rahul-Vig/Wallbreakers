// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Hamming Distance.
// Memory Usage: 8 MB, less than 100.00% of C++ online submissions for Hamming Distance.

class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int count = 0; //keep track of how many different bits there are

        while (x != 0 || y != 0)
        { //while x or y is not 0
            if (x % 2 != y % 2)
                count++; //if the mod of x by 2 is not == to the mod of y by 2, there is a difference in bits.
            x /= 2;      //since we checked the right most bit, check the rest of the bits until while loop stops
            y /= 2;
        }

        return count;
    }
};