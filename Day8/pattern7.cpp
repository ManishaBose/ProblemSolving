/*
Sample Input 1:
3
Sample Output 1:
  *
 ***
*****
*/

#include <iostream>
using namespace std;
void nStarTriangle(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int k = 1; k <= i * 2 - 1; k++)
            cout << '*';
        cout << endl;
    }
}