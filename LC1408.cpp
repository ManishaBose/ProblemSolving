#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    vector<string> stringMatching(vector<string> &words)
    {
        vector<string> ans;
        unordered_set<string> a;
        for (int i = 0; i < words.size(); i++)
            for (int j = 0; j < words.size(); j++)
                if (i != j && words[i].find(words[j]) != string::npos)
                    a.insert(words[j]);
        for (auto it = a.begin(); it != a.end(); it++)
            ans.push_back(*it);
        return ans;
    }
};