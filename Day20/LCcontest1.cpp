// LC: 3442
#include <iostream>
using namespace std;
class Solution
{
public:
    int maxDifference(string s)
    {
        unordered_map<char, int> mp;
        vector<int> e, o;
        int ans = INT_MIN;
        for (char c : s)
        {
            mp[c]++;
        }
        for (auto i : mp)
        {
            if (i.second % 2)
                o.push_back(i.second);
            else
                e.push_back(i.second);
        }
        for (int i = 0; i < o.size(); i++)
        {
            for (int j = 0; j < e.size(); j++)
            {
                ans = max(ans, o[i] - e[j]);
            }
        }
        return ans;
    }
};