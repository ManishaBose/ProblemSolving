#include <iostream>
using namespace std;

int main()
{
    /*
     *  Write your code here.
     *  Read input as specified in the question.
     *  Print output as specified in the question.
     */
    int inpt, a = 0, b = 1, c = 0;
    cin >> inpt;
    if (inpt == 1)
    {
        cout << 1;
        return 0;
    }
    for (int cnt = 0; inpt > 1 && cnt != inpt; cnt++)
    {
        a = b;
        b = c;
        c = a + b;
    }
    cout << c;
    return 0;
}