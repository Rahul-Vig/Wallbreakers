class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &A)
    {
        //in a transpose (row,col) becomes (col,row)

        vector<vector<int>> transposeMatrix(A[0].size());

        for (int i = 0; i < A[0].size(); i++)
        { //col
            for (int j = 0; j < A.size(); j++)
            { //row
                transposeMatrix[i].push_back(A[j][i]);
            }
        }

        return transposeMatrix;
    }
};