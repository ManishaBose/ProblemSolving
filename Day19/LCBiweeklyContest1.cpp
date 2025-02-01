// LC: 3488
#include <iostream>
using namespace std;
class Solution
{
public:
    string findValidPair(string s)
    {
        unordered_map<char, int> mp;
        string ans = "";
        for (char c : s)
        {
            mp[c]++;
        }
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] != s[i + 1] && mp[s[i]] == s[i] - '0' && mp[s[i + 1]] == s[i + 1] - '0')
            {
                ans += s[i];
                ans += s[i + 1];
                return ans;
            }
        }
        return ans;
    }
};