class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A)
    {
        vector<vector<int>> flippedMatrix(A.size());

        //First reverse each row

        for (int i = 0; i < A.size(); i++)
        {
            int end = A[i].size() - 1;
            for (int j = 0; j < A[i].size() / 2; j++)
            {
                int temp = A[i][j];
                A[i][j] = A[i][end];
                A[i][end] = temp;
                end--;
            }
        }

        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A[i].size(); j++)
            {
                A[i][j] = !A[i][j];
            }
        }

        return A;
    }
};