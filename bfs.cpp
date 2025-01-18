#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution
{
public:
    vector<int> bfsOfGraph(vector<vector<int>> &adj)
    {
        int n = adj.size();
        // initial state
        vector<int> vis(n, 0);
        vis[0] = 1;
        queue<int> q;
        q.push(0);

        vector<int> bfs;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            // check out the neighbor nodes
            for (auto it : adj[node])
            {
                if (!vis[it])
                {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> adj = {
        {2, 3, 1}, {0}, {0, 4}, {0}, {2}};
    vector<int> ans = s.bfsOfGraph(adj);
    for (int node : ans)
        cout << node << " ";
    return 0;
}
/*
    Space complexity: O(n)
    Time complexity: O(n)+O(2E)
        Runs on all degrees
        Queue will run O(n) times because there are n nodes
        for loop will run for total degrees that is 2E
*/