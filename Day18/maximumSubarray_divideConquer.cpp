// Intution:
// Maximum subarray sum is such that it lies somewhere -
// Entirely in the left-half of array [L, mid-1], OR
// Entirely in the right-half of array [mid+1, R], OR
// In array consisting of mid element along with some part of left-half and some part of right-half such that these form contiguous subarray
#include <iostream>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        return divideConquer(nums, 0, nums.size() - 1);
    }
    int divideConquer(vector<int> &nums, int l, int r)
    {
        if (l > r)
            return INT_MIN;
        int mid = (l + r) / 2;
        int leftSum = 0, rightSum = 0;
        for (int i = mid - 1, currSum = 0; i >= l; i--)
        {
            currSum += nums[i];
            leftSum = max(leftSum, currSum);
        }
        for (int i = mid + 1, currSum = 0; i <= r; i++)
        {
            currSum += nums[i];
            rightSum = max(rightSum, currSum);
        }
        return max({divideConquer(nums, l, mid - 1), divideConquer(nums, mid + 1, r), leftSum + nums[mid] + rightSum});
    }
};

// TC: O(NlogN)
// SC: O(logN); recursive stack