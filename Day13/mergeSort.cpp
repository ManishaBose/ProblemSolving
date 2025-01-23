#include <iostream>
using namespace std;
class Solution
{
    void merge(vector<int> &arr, int l, int mid, int r)
    {
        vector<int> temp;
        int index1 = l, index2 = mid + 1;
        while (index1 <= mid && index2 <= r)
        {
            if (arr[index1] < arr[index2])
                temp.push_back(arr[index1++]);
            else
                temp.push_back(arr[index2++]);
        }
        for (; index1 <= mid; index1++)
            temp.push_back(arr[index1++]);
        for (; index2 <= r; index2++)
            temp.push_back(arr[index2++]);
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