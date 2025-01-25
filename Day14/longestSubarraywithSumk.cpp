#include <iostream>
using namespace std;
class Solution
{
public:
    int longestSubarray(vector<int> &arr, int k)
    {
        // code here
        unordered_map<int, int> mp;
        int len = 0, sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
            if (sum == k)
                len = max(len, i + 1);
            if (mp.find(sum - k) != mp.end())
                len = max(len, i - mp[sum - k]);
            if (mp.find(sum) == mp.end()) // if the sum exists, you shouldn't
                // reupdate; otherwise, for multiple zeros, your code will fail
                mp[sum] = i;
        }
        return len;
    }
};