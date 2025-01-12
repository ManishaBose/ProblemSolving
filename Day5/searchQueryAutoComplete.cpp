// without using trie
//{ Driver Code Starts
#include <iostream>
#include <vector>
using namespace std;

// } Driver Code Ends
class AutoCompleteSystem
{
    static bool cmp(const pair<string, int> &a, const pair<string, int> &b)
    {
        if (a.second == b.second)
        {
            return a.first < b.first;
        }
        else
            return a.second > b.second;
    }

public:
    string str = "";
    vector<pair<string, int>> histSen;
    AutoCompleteSystem(vector<string> &sentences, vector<int> &times)
    {
        // write code for constructor
        for (int i = 0; i < sentences.size(); i++)
        {
            histSen.push_back(make_pair(sentences[i], times[i]));
        }
        sort(histSen.begin(), histSen.end(), cmp);
    }

    vector<string> input(char c)
    {
        // write code to return the top 3 suggestions when the current character in the
        // stream is c c == '#' means , the current query is complete and you may save
        // the entire query into historical data
        vector<string> ans;
        if (c != '#')
            str.push_back(c);
        for (int i = 0; i < histSen.size() && ans.size() < 3; i++)
        {
            // cout<<histSen[i].first<<endl;
            string temp = histSen[i].first;
            if (temp.length() >= str.length())
            {
                string subst = temp.substr(0, str.length());
                if (subst == str)
                    ans.push_back(histSen[i].first);
            }
        }
        bool found = false;
        if (c == '#')
        { // to save
            for (int i = 0; i < histSen.size(); i++)
            {
                if (str == histSen[i].first)
                {
                    histSen[i].second++;
                    found = true;
                    break;
                }
            }
            if (found == false)
                histSen.push_back(make_pair(str, 1));
            sort(histSen.begin(), histSen.end(), cmp);
            str = "";
        }
        return ans;
    }
};

/**
 * Your AutoCompleteSystem object will be instantiated and called as such:
 * AutoCompleteSystem* obj = new AutoCompleteSystem(sentences, times);
 * vector<string> param_1 = obj->input(c);
 */

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        vector<string> sentences(n);
        vector<int> times(n);
        for (int i = 0; i < n; ++i)
        {

            getline(cin, sentences[i]);
            cin >> times[i];
            cin.ignore();
        }
        AutoCompleteSystem *obj = new AutoCompleteSystem(sentences, times);
        int q;
        cin >> q;
        cin.ignore();

        for (int i = 0; i < q; ++i)
        {
            string query;
            getline(cin, query);
            string qq = "";
            for (auto &x : query)
            {
                qq += x;
                vector<string> suggestions = obj->input(x);
                if (x == '#')
                    continue;
                cout << "Typed : \"" << qq << "\" , Suggestions: \n";
                for (auto &y : suggestions)
                {
                    cout << y << "\n";
                }
            }
        }
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends