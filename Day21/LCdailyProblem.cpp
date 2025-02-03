// LC: 3105
#include <iostream>
using namespace std;
class Solution
{
public:
    int longestMonotonicSubarray(vector<int> &nums)
    {
        int ans = INT_MIN;
        int l = 1;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] < nums[i + 1])
                l++;
            else
                l = 1;
            ans = max(ans, l);
        }
        l = 1;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
                l++;
            else
                l = 1;
            ans = max(ans, l);
        }
        return max(ans, 1);
    }
};