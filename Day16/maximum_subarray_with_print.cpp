#include <iostream>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int s = -1, e = -1, maxi = INT_MIN, sum = 0, start = -1;
        ;
        for (int i = 0; i < nums.size(); i++)
        {
            if (sum == 0)
                start = i;
            sum += nums[i];
            if (sum > maxi)
            {
                maxi = sum;
                s = start;
                e = i;
            }
            if (sum < 0)
                sum = 0;
        }
        for (int i = s; i <= e; i++)
            cout << nums[i] << " ";
        return maxi;
    }
};