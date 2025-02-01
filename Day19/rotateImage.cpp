// LC: 48
#include <iostream>
using namespace std;
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int r = matrix.size(), c = matrix[0].size();
        // transpose
        for (int i = 0; i < r; i++)
        {
            for (int j = i + 1; j < c; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // reverse
        for (int i = 0; i < r; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
// TC: O(N/2 * N/2)+O(N * N/2)
// SC: O(1)