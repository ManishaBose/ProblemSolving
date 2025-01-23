#include <iostream>
using namespace std;
class Solution
{
    void merge(vector<int> &arr, int l, int mid, int r)
    {
        vector<int> temp;
        int i1 = l, i2 = mid + 1;
        while (i1 <= mid && i2 <= r)
        {
            if (arr[i1] < arr[i2])
                temp.push_back(arr[i1++]);
            else
                temp.push_back(arr[i2++]);
        }
        for (; i1 <= mid; i1++)
            temp.push_back(arr[i1++]);
        for (; i2 <= r; i2++)
            temp.push_back(arr[i2++]);
        for (int i = 0; i < temp.size(); i++)
            arr[l++] = temp[i];
    }

public:
    void mergeSort(vector<int> &arr, int l, int r)
    {
        if (l >= r)
            return;
        int mid = (r + l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
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
    s.mergeSort(arr, 0, n - 1);
    // print
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}