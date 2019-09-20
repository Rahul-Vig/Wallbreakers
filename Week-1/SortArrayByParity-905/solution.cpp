//LeetCode Problem 905: Sort Array by Parity
//Runtime: 28 ms faster than 76.04% of C++ online submissions
//Memory Usage: 9.6 MB less than 100% of C++ online submissions

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &A)
    {
        int oddCount = 0;
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] % 2 != 0)
            {
                oddCount++;
            }
            else
            {
                if (oddCount > 0)
                {
                    swap(A[i], A[i - oddCount]);
                    oddCount--;
                    i--;
                }
            }
        }

        return A;
    }
};
