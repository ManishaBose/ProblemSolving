// using prefix sum approach. Calcluating prefix sum for both left and right.
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    vector<int> minOperations(string boxes)
    {
        int balls = 0, moves = 0;
        vector<int> ans;
        for (int i = 0; i < boxes.length(); i++)
        {
            ans.push_back(balls + moves);
            moves = moves + balls;
            balls += (boxes[i] - '0');
        }
        balls = 0, moves = 0;
        for (int i = boxes.length() - 1; i >= 0; i--)
        {
            ans[i] += balls + moves;
            moves = moves + balls;
            balls += (boxes[i] - '0');
        }
        return ans;
    }
};