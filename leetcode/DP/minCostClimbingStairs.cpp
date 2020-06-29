class Solution
{
public:
    int helper(vector<int> &cost)
    {
        int len = cost.size();
        int dp[len + 1];

        dp[0] = cost[0];
        dp[1] = cost[1];
        for (int i = 2; i < len; i++)
            dp[i] = cost[i] + min(dp[i - 2], dp[i - 1]);

        return min(dp[len - 2], dp[len - 1]);
    }

    int minCostClimbingStairs(vector<int> &cost)
    {

        //edge cases
        if (cost.size() == 0)
            return 0;
        if (cost.size() == 1)
            return cost[0];
        if (cost.size() == 2)
            return min(cost[0], cost[1]);

        return helper(cost);
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();