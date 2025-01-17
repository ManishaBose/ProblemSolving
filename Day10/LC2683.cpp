#include <iostream>
using namespace std;
class Solution
{
public:
    bool doesValidArrayExist(vector<int> &derived)
    {
        int xorDer = 0;
        for (auto i : derived)
        {
            xorDer ^= i;
        }
        if (xorDer == 0)
            return true;
        return false;
    }
};