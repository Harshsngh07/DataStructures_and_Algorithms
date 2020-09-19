class Solution
{
public:
    int helper(vector<int> nums, int st, int end)
    {
        int n = end - st + 1;
        vector<int> dp(n);
        dp[0] = nums[st];
        dp[1] = max(nums[st], nums[st + 1]);

        for (int i = st + 2; i <= end; i++)
            dp[i - st] = max(dp[i - st - 1], dp[i - st - 2] + nums[i]);

        return dp[end - st];
    }

    int rob(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];
        if (n == 2)
            return max(nums[0], nums[1]);

        int a = helper(nums, 0, n - 2);
        int b = helper(nums, 1, n - 1);

        return max(a, b);
    }
};
static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();