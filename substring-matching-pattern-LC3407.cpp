class Solution
{
public:
    bool hasMatch(string s, string p)
    {
        string prefix = "", suffix = "";
        bool flag = 1;
        int i, l = 0, j = 0;
        for (i = 0; p[i] != '*'; i++)
            prefix.push_back(p[i]);
        for (i = i + 1; i < p.length(); i++)
            suffix.push_back(p[i]);

        if (prefix != "")
        {
            for (l = 0; l < s.length(); l++)
            {
                if (s[l] == prefix[0])
                {
                    int temp = l + 1;
                    for (j = 1; j < prefix.length() && temp < s.length(); j++, temp++)
                    {
                        if (s[temp] != prefix[j])
                            break;
                    }
                    if (j == prefix.length())
                    {
                        l = temp;
                        break;
                    }
                }
            }
            if (j != prefix.length())
                flag = 0;
        }
        if (suffix != "" && flag)
        {
            j = 0;
            for (; l < s.length(); l++)
            {
                if (s[l] == suffix[0])
                {
                    int temp = l + 1;
                    for (j = 1; j < suffix.length() && temp < s.length(); j++, temp++)
                    {
                        if (s[temp] != suffix[j])
                            break;
                    }
                    if (j == suffix.length())
                        break;
                }
            }
            if (j != suffix.length())
                flag = 0;
        }
        if (flag)
            return true;
        return false;
    }
};