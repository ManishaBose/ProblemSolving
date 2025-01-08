#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int countPrefixSuffixPairs(vector<string> &words)
    {
        int ans = 0;
        string pref, suff;
        for (int i = 0; i < words.size(); i++)
        {
            string word = words[i];
            pref = "";
            suff = "";
            int len = word.length();
            for (int j = i + 1; j < words.size(); j++)
            {
                pref = words[j].substr(0, len);
                int end = words[j].length() - len;
                if (end < words[j].length())
                    suff = words[j].substr(end, len);
                if (word == pref && word == suff)
                    ans++;
            }
        }
        return ans;
    }
};