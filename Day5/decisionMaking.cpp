//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    string compareNM(int n, int m)
    {
        // code here
        if (n > m)
            return "greater";
        else if (n == m)
            return "equal";
        return "lesser";
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        Solution obj;
        cout << obj.compareNM(n, m) << "\n";

        cout << "~" << "\n";
    }
    return 0;
}
// } Driver Code Ends