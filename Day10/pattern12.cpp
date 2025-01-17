/*
Sample Input 1:
3
Sample Output 1:
1         1
1 2     2 1
1 2 3 3 2 1
*/
#include <iostream>
using namespace std;
void numberCrown(int n)
{
    // Write your code here.
    int j;
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int k = 1; k <= (n - i) * 2; k++)
        {
            cout << "  ";
        }
        for (j = j - 1; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}