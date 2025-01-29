#include <iostream>
using namespace std;
class Solution
{
public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr)
    {
        // Your code goes here
        int s = 0, sum = arr[0], ans = INT_MIN;
        for (int i = 1; i < arr.size(); i++)
        {
            sum += arr[i];
            if (sum > ans)
                ans = sum;
            sum = arr[i];
        }
        return ans;
    }
};