#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool canConstruct(string s, int k)
    {
        vector<int> count(26, 0);
        int c = 0;
        if (s.length() < k)
            return false;
        for (int i = 0; i < s.length(); i++)
        {
            count[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (count[i] % 2)
                c++;
        }
        if (c > k)
            return false;
        return true;
    }
};