// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Gap.
// Memory Usage: 8.1 MB, less than 100.00% of C++ online submissions for Binary Gap.

#include <limits.h>

class Solution
{
public:
    int binaryGap(int N)
    {
        int maxDistance = 0; //keep track of max distance
        int last = INT_MIN;  //set last to be INT_MIN this will keep track of the last bit
        int index = 1;       //keep track of the currIndex;
        int currBit;         //keep track of the current bit

        while (N != 0)
        {
            currBit = N % 2; //if N % 2 == 1 we have a remainder of 1 and therefore a one in the byte representation

            if (currBit == 1)
            { //if the bit is one, then we have to recheck the max distance
                if (last >= 0)
                {                                                      //if last is > 0 which it wont be until the second iteration
                    maxDistance = std::max(maxDistance, index - last); //then we assign a new maxDistance depending on if the currBit == 1
                }
                last = index; //assign last the value of index. last will always be smaller than index.
            }

            index++; //increment index
            N /= 2;  //divide N/2 to get the next bit until N  <= 0
        }

        return maxDistance;
    }
};