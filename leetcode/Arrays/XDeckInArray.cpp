class Solution
{
public:
    bool hasGroupsSizeX(vector<int> &deck)
    {
        unordered_map<int, int> freq;

        if (deck.size() < 2)
            return false;

        for (auto &i : deck)
        {
            freq[i]++;
        }

        int minFreq = INT_MAX;
        for (auto &i : freq)
            minFreq = min(minFreq, i.second);

        if (minFreq < 2)
            return false;

        bool res = false;
        for (int i = 2; i <= 9; i++)
        {
            bool flag = true;
            for (auto &f : freq)
                if (f.second % i)
                {
                    flag = false;
                    break;
                }

            if (flag)
                res |= true;
        }

        return res;
    }
};