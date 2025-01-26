#include <iostream>
#include <sstream>
using namespace std;
class Solution
{
    static bool cmp(const vector<string> &a, const vector<string> &b)
    {
        if (stoi(a[1]) == stoi(b[1]))
            return a[0] > b[0];
        else
            return stoi(a[1]) < stoi(b[1]);
    }

public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>> &events)
    {
        vector<int> ans(numberOfUsers, 0);
        sort(events.begin(), events.end(), cmp);
        unordered_map<int, int> offline;
        for (auto e : events)
        {
            if (e[0] == "MESSAGE" && e[2] != "HERE" && e[2] != "ALL")
            {
                stringstream ss(e[2]);
                string id;
                while (ss >> id)
                {
                    int c = stoi(id.substr(2));
                    ans[c]++;
                }
            }
            else if (e[0] == "MESSAGE" && e[2] == "ALL")
            {
                for (int i = 0; i < numberOfUsers; i++)
                    ans[i]++;
            }
            else if (e[0] == "OFFLINE")
            {
                string timeStamp = e[1];
                int t = stoi(timeStamp);
                string id = e[2];
                int idInt = stoi(id);
                offline[idInt] = t + 59;
            }
            else
            {
                string timeStamp = e[1];
                int t = stoi(timeStamp);
                for (int i = 0; i < numberOfUsers; i++)
                {
                    if (offline.find(i) == offline.end() || offline[i] < t)
                        ans[i]++;
                }
            }
        }
        return ans;
    }
};