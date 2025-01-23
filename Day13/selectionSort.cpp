#include <iostream>

using namespace std;
class Solution
{
public:
    void selectionSort(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            int s = arr[i];
            int si = i;
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[j] < s)
                {
                    s = arr[j];
                    si = j;
                }
            }
            swap(arr[si], arr[i]);
        }
    }
};
int main()
{
    vector<int> arr = {4, 1, 3, 9, 7};
    Solution s;
    s.selectionSort(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}