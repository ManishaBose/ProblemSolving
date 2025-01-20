// print all the prime numbers from 1 to n;
#include <iostream>
using namespace std;
void findPrime(int n)
{
    vector<bool> num(n + 1, true);
    num[0] = num[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (num[i] == true)
        {
            cout << i << " ";
            for (int j = i * 2; j < n; j = j + i)
                num[j] = false;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    findPrime(n);
    return 0;
}
// Time complexity: O(nlog(log n))
// Space complexity: O(n)