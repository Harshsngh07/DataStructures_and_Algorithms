class Solution
{
public:
    int helper(int n)
    {
        int dp[n + 1];

        //base case
        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++)
            dp[i] = dp[i - 1] + dp[i - 2];

        return dp[n];
    }

    int climbStairs(int n)
    {
        return helper(n);
    }
};