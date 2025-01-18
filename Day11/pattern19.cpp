// Sample Input 1:
// 3
// Sample Output 1:
// * * * * * *
// * *     * *
// *         *
// *         *
// * *     * *
// * * * * * *
#include <iostream>
using namespace std;
void symmetry(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        // triangle 1
        for (int j = n; j >= i; j--)
            cout << "* ";
        // space
        for (int k = 1; k <= (i - 1) * 2; k++)
            cout << "  ";
        // triangle 2
        for (int j = n; j >= i; j--)
            cout << "* ";
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        // triangle 1
        for (int j = 1; j <= i; j++)
            cout << "* ";
        // space
        for (int k = 1; k <= (n - i) * 2; k++)
            cout << "  ";
        // triangle 2
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
}
