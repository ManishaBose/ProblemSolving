#include <iostream>
using namespace std;
class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {
        if (s1 == s2)
            return true;
        for (int i = 0; i < s1.length(); i++)
        {
            for (int j = i + 1; j < s1.length(); j++)
            {
                swap(s1[i], s1[j]);
                if (s1 == s2)
                    return true;
                else
                    swap(s1[i], s1[j]);
            }
        }
        return false;
    }
};