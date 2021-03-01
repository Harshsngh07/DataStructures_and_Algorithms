class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int count(0), pos(0);
        if (ruleKey[0] == 't')
            pos = 0;
        else if (ruleKey[0] == 'c')
            pos = 1;
        else
            pos = 2;

        for (auto i : items)
        {
            if (i[pos] == ruleValue)
                count++;
        }

        return count;
    }
};