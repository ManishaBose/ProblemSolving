#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int minimumLength(string s)
    {
        int len = 0;
        unordered_map<char, int> mp;
        for (char c : s)
        {
            if (mp.find(c) == mp.end())
                mp[c] = 1;
            else
                mp[c]++;
            if (mp[c] == 3)
            {
                mp[c] = 1;
                len = len - 2;
            }
            len++;
        }
        return len;
    }
};