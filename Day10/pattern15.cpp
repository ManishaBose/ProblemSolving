/*
Sample Input 1:
3
Sample Output 1:
A B C
A B
A
*/
#include <iostream>
using namespace std;
void nLetterTriangle(int n)
{
    // Write your code here.
    char c;
    for (int i = 1; i <= n; i++)
    {
        c = 'A';
        for (int j = n; j >= i; j--)
        {
            cout << c++ << " ";
        }
        cout << endl;
    }
}