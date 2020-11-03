class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
            m[nums[i]]++;
        int ans(0);
        for (auto i : m)
        {
            int x = i.second;
            ans += x * (x - 1) / 2;
        }
        return ans;
    }
};