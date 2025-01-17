/*
Sample Input 1:
3
Sample Output 1:
1
0 1
1 0 1
*/
#include <iostream>
using namespace std;
void nBinaryTriangle(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2)
                cout << "0 ";
            else
                cout << "1 ";
        }
        cout << endl;
    }
}