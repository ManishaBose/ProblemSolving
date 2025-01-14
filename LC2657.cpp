#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {
        unordered_map<int, int> mp;
        vector<int> ans;
        mp[A[0]]++;
        mp[B[0]]++;
        if (A[0] == B[0])
            ans.push_back(1);
        else
            ans.push_back(0);
        for (int i = 1; i < A.size(); i++)
        {
            if (A[i] == B[i])
            {
                ans.push_back(ans[i - 1] + 1);
            }
            else
            {
                int toAdd = 0;
                if (mp[A[i]] == 1)
                {
                    mp[A[i]] = 0;
                    toAdd += 1;
                }
                else
                    mp[A[i]]++;
                if (mp[B[i]] == 1)
                {
                    mp[B[i]] = 0;
                    toAdd += 1;
                }
                else
                    mp[B[i]]++;
                ans.push_back(ans[i - 1] + toAdd);
            }
        }
        return ans;
    }
};