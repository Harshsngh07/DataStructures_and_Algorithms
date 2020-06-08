#include <bits/stdc++.h>
using namespace std;

int minCoins(int n, int coins[], int T, int dp[])
{
    //base case
    if (n == 0)
        return 0;

    //lookup table
    if (dp[n] != 0)
        return dp[n];

    //recursive call
    int ans = INT_MAX;
    for (int i = 0; i < T; i++)
    {
        if (n - coins[i] >= 0)
        {
            int subProb = minCoins(n - coins[i], coins, T, dp);
            ans = min(ans, subProb + 1);
        }
    }

    dp[n] = ans;
    return dp[n];
}

int minCoinsBu(int N, int coins[], int T)
{
    int dp[100] = {0};

    //iterating over 1...amount which is 1....n in our case
    for (int n = 1; n <= N; n++)
    {
        dp[n] = INT_MAX;
        for (int i = 0; i < T; i++)
        {
            if (n - coins[i] >= 0)
            {
                int subProb = dp[n - coins[i]];
                dp[n] = min(dp[n], subProb + 1);
            }
        }
    }
    return dp[N];
}

int main()
{
    int N = 15;
    int coins[] = {1, 7, 10};
    int dp[100] = {0};
    int T = sizeof(coins) / sizeof(int);

    cout << minCoinsBu(N, coins, T) << endl;
}