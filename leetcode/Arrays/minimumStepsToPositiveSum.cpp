class Solution
{
public:
    int minStartValue(vector<int> &nums)
    {
        int prefixSum(0), ans(1);

        for (int i = 0; i < nums.size(); i++)
        {
            prefixSum += nums[i];

            if (prefixSum < 0)
                ans = max(ans, abs(prefixSum) + 1);
        }

        return ans;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();