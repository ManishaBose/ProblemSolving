class Solution
{
public:
    string shiftingLetters(string s, vector<vector<int>> &shifts)
    {
        int shiftLen = shifts.size();
        int n = s.length();
        int numberOfShifts = 0;
        vector<int> diff(n, 0);
        for (int i = 0; i < shiftLen; i++)
        {
            if (shifts[i][2] == 0)
            {
                diff[shifts[i][0]]--;
                if (shifts[i][1] + 1 < n)
                    diff[shifts[i][1] + 1]++;
            }
            else
            {
                diff[shifts[i][0]]++;
                if (shifts[i][1] + 1 < n)
                    diff[shifts[i][1] + 1]--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            numberOfShifts = (numberOfShifts + diff[i]) % 26;
            if (numberOfShifts < 0)
                numberOfShifts += 26;
            s[i] = 'a' + (s[i] - 'a' + numberOfShifts) % 26;
        }
        return s;
    }
};