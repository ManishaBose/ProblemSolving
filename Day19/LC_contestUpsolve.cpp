// LC: 3434
#include <iostream>
using namespace std;
class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k)
    {
        int original = 0, maxOcc = 0;
        // Count the original no. of k in the array
        for (int n : nums)
        {
            if (n == k)
                original++;
        }
        for (int m = 1; m <= 50; m++)
        { // constraints: 1 to 50
            if (m != k)
            { // if m = k then no use, you can't change anything
                // Apply Kadane's for each of 1 to 50 to find the maxSubarray sum
                // Since we take m to be 1; hence, maxSubarray sum will be the freq of m;
                // Having k in our subarray, reduces our prospects so -1
                // others don't concern us, so 0
                int maxSum = INT_MIN, sum = 0;
                for (int n : nums)
                {
                    if (n == k)
                    {
                        sum += -1;
                    }
                    else if (n == m)
                    {
                        sum += 1;
                    }
                    maxSum = max(maxSum, sum);
                    if (sum < 0)
                        sum = 0;
                }
                maxOcc = max(maxOcc, maxSum);
            }
        }
        return original + maxOcc;
    }
};