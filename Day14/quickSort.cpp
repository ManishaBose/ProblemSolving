#include <iostream>
using namespace std;
class Solution
{
public:
    int partition(vector<int> &arr, int low, int high)
    {
        // code here
        int i = low - 1;
        int pivot = arr[high];
        for (int j = low; j < high; j++)
        {
            if (arr[j] < pivot)
                swap(arr[++i], arr[j]);
        }
        swap(arr[i + 1], arr[high]);
        return i + 1;
    }
    void quickSort(vector<int> &arr, int low, int high)
    {
        // code here
        if (low >= high)
            return;
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
};
int main()
{
    Solution s;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    s.quickSort(arr, 0, n - 1);
    // print
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}