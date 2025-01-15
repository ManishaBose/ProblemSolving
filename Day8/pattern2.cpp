// Sample Input 1:
// 3
// Sample Output 1:
// *
// * *
// * * *

#include <iostream>
using namespace std;
void nForest(int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
