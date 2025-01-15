// Sample Input 1:
// 3
// Sample Output 1:
// 1 2 3
// 1 2
// 1

#include <iostream>
using namespace std;
void nNumberTriangle(int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        int output = 1;
        for (int j = n; j > i; j--)
        {
            cout << output++ << " ";
        }
        cout << endl;
    }
}