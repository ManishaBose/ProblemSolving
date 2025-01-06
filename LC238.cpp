#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> ans;
        int toMultiply = 1;
        ans.push_back(1);
        for (int i = 0; i < nums.size() - 1; i++)
        {
            ans.push_back(ans[i] * nums[i]);
        }
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            toMultiply = toMultiply * nums[i + 1];
            ans[i] *= toMultiply;
        }
        return ans;
    }
};