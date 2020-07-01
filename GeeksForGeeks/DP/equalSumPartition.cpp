bool subsetSum(int a[], int n, int sum)
{
    bool dp[n + 1][sum + 1];

    for (int i = 0; i < n + 1; i++)
        dp[i][0] = true;

    for (int i = 1; i < sum + 1; i++)
        dp[0][i] = false;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (a[i - 1] <= j)
                dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
            if (a[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
        }
    }

    return dp[n][sum];
}

bool findPartition(int a[], int n)
{
    int sum(0);
    for (int i = 0; i < n; i++)
        sum += a[i];

    if (sum % 2 != 0)
        return false;
    else
        return subsetSum(a, n, sum / 2);
}