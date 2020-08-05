int longestSubsequence(int n, int a[])
{
    int dp[n];

    dp[0] = 1;

    int ans = -1;
    for (int i = 1; i < n; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j] && dp[i] < dp[j] + 1)
                dp[i] = 1 + dp[i];
        }
    }

    ans = *max_element(dp, dp + n);

    return ans;
}