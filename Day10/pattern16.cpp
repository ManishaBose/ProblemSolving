/*
Sample Input 1:
3
Sample Output 1:
A
B B
C C C
*/
#include <iostream>
using namespace std;
void alphaRamp(int n)
{
    // Write your code here.
    char c = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
        }
        c++;
        cout << endl;
    }
}