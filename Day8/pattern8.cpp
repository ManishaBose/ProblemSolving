/*
Sample Input 1:
3
Sample Output 1:
*****
 ***
  *
*/

#include <iostream>
using namespace std;
void nStarTriangle(int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << ' ';
        }
        for (int j = 1; j <= 2 * (n - i) - 1; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}