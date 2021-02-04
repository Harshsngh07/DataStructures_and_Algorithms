//93% faster
class Solution
{
public:
    int findLHS(vector<int> &nums)
    {
        unordered_map<int, int> m;
        int ans(0);

        for (auto i : nums)
        {
            m[i]++;
            int x = i - 1;
            int y = i + 1;
            if (m.find(x) != m.end())
                ans = max(ans, m[i] + m[x]);
            if (m.find(y) != m.end())
                ans = max(ans, m[i] + m[y]);
        }

        return ans;
    }
};

//144ms
class Solution
{
public:
    int findLHS(vector<int> &nums)
    {
        unordered_map<int, int> m;

        for (auto i : nums)
            m[i]++;
        int ans(0);
        for (auto i : m)
        {
            int x = i.first + 1;
            if (m.find(x) != m.end())
                ans = max(ans, i.second + m[x]);
        }
        return ans;
    }
};