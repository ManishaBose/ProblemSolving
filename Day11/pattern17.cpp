/*
Sample Input 1:
3
Sample Output 1:
    A
  A B A
A B C B A
*/
#include <iostream>
using namespace std;
void alphaHill(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        char c = 'A';
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << c++ << ' ';
        }
        for (c = c - 2; c >= 'A'; c--)
        {
            cout << c << ' ';
        }
        cout << endl;
    }
}