class Solution
{
public:
    vector<int> removeDuplicate(vector<int> &a, int n)
    {
        unordered_map<int, int> m;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (m[a[i]] == 0)
            {
                v.push_back(a[i]);
                m[a[i]]++;
            }
            else
                continue;
        }

        return v;
    }
};