#include <bits/stdc++.h>
using namespace std;

long long numberOfWays(int coins[], int numberOfCoins, int value)
{
    long long dp[numberOfCoins + 1][value + 1];

    for (int i = 0; i < numberOfCoins + 1; i++)
        dp[i][0] = 1;
    for (int i = 1; i < value + 1; i++)
        dp[0][i] = 0;

    for (int i = 1; i < numberOfCoins + 1; i++)
    {
        for (int j = 1; j < value + 1; j++)
        {
            if (coins[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] += dp[i - 1][j - coins[i - 1]];
        }
    }

    return dp[numberOfCoins][value];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int coins[n];
        for (int i = 0; i < n; i++)
            cin >> coins[i];
        int value;
        cin >> value;

        cout << numberOfWays(coins, n, value) << endl;
    }
    return 0;
}