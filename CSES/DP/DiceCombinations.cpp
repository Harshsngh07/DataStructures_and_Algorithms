//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long solve(long long n)
{
    long long dp[n + 1];

    memset(dp, 0, sizeof(dp));

    dp[0] = 1;
    for (int i = 1; i < n + 1; i++)
    {
        for (int x = 1; x <= 6; x++)
        {
            if (i < x)
                break;
            dp[i] = (dp[i] + dp[i - x]) % MOD;
        }
    }

    return dp[n];
}

int main()
{
    long long n;
    cin >> n;
    cout << solve(n) << endl;
}