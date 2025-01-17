/*
Sample Input 1:
3
Sample Output 1:
1
2 3
4 5 6
*/
#include <iostream>
using namespace std;
void nNumberTriangle(int n)
{
    // Write your code here.
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
}