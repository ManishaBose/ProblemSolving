#include <iostream>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        int ans = 0;
        int num = x;
        while (num != 0)
        {
            if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
                return 0;
            ans = ans * 10 + num % 10;
            num = num / 10;
        }
        return ans;
    }
};