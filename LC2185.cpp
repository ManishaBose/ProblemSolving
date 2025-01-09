#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Solution
{
public:
    int prefixCount(vector<string> &words, string pref)
    {
        int prefLen = pref.size();
        int ans = 0;
        for (string word : words)
        {
            string check = word.substr(0, prefLen);
            if (check == pref)
                ans++;
        }
        return ans;
    }
};