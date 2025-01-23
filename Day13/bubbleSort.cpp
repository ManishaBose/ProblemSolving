#include <iostream>

using namespace std;
class Solution
{
public:
    void bubbleSort(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            bool didSwap = 0;
            for (int j = 0; j < arr.size() - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    didSwap = 1;
                }
            }
            if (didSwap == 0)
                break;
        }
    }
};
int main()
{
    vector<int> arr = {4, 1, 3, 9, 7, 7, 7, 7, 7, 7, 7};
    Solution s;
    s.bubbleSort(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}