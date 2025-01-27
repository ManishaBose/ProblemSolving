class Solution
{
public:
    vector<int> minOperations(string boxes)
    {
        unordered_set<int> indexOfOne;
        vector<int> ans;
        for (int i = 0; i < boxes.length(); i++)
        {
            if (boxes[i] == '1')
                indexOfOne.insert(i);
        }
        for (int i = 0; i < boxes.length(); i++)
        {
            int temp = 0;
            for (auto it = indexOfOne.begin(); it != indexOfOne.end(); it++)
            {
                temp += abs(*it - i);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};