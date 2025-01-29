#include <iostream>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int ans = 0, buy = prices[0], sell = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < buy)
            {
                buy = prices[i];
                sell = prices[i];
            }
            if (prices[i] > sell)
            {
                sell = prices[i];
                ans = max(sell - buy, ans);
            }
        }
        return ans;
    }
};