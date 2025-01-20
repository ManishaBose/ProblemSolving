// If d is a divisor of n, then n/d is also a divisor of n
// This property is symmetric about the sqrt of n, so avoid redundant iterations

#include <iostream>
using namespace std;
bool checkPrime(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (i != n / i) // this is for n say 36 and i is 6; for n=16 and i=4
                cnt++;
        }
    }
    return cnt == 2;
}
int main()
{
    int n;
    cin >> n;
    checkPrime(n) == 1 ? cout << "True" : cout << "False";
    return 0;
}