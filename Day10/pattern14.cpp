/*
Sample Input 1:
3
Sample Output 1:
A
A B
A B C
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
        for (int j = 1; j <= i; j++)
        {
            cout << c++ << " ";
        }
        cout << endl;
    }
}