// LC: 3151
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isArraySpecial(vector<int> &nums)
    {
        if (nums.size() < 2)
            return true;
        int e_o = nums[0] % 2; // even = 0, odd = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (e_o != nums[i] % 2)
                e_o = nums[i] % 2;
            else
                return false;
        }
        return true;
    }
};