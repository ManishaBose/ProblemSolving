/*
Sample Input 1:
3
Sample Output 1:
C
C B
C B A
*/
#include <iostream>
using namespace std;
void alphaTriangle(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        char c = 'A' + n - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << c-- << ' ';
        }
        cout << endl;
    }
}