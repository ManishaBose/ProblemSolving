/*
Sample Input 1:
3
Sample Output 1:
  *
 ***
*****
*****
 ***
  *
*/
#include <iostream>
using namespace std;
void nStarDiamond(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (j >= n - i + 1 && j <= n + i - 1)
                cout << "*";
            else
                cout << ' ';
        }
        cout << endl;
    }
    int end = n * 2 - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n * 2 - 1; j++)
        {
            if (j >= i && j <= end)
                cout << "*";
            else
                cout << ' ';
        }
        end--;
        cout << endl;
    }
}