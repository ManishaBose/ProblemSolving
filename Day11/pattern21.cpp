// Sample Input 1:
// 3
// Sample Output 1:
// ***
// * *
// ***

#include <iostream>
using namespace std;
void getStarPattern(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
                cout << "*";
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                    cout << "*";
                else
                    cout << ' ';
            }
        }
        cout << endl;
    }
}
