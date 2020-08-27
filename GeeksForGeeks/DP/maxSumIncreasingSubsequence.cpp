#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int MaxSumIncreasingSub(int a[], int n)
{
    int dp[n];

    for (int i = 0; i < n; i++)
    {
        dp[i] = a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
                dp[i] = max(dp[i], a[i] + dp[j]);
        }
    }

    int res = dp[0];

    for (int i = 0; i < n; i++)
        res = max(res, dp[i]);
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << MaxSumIncreasingSub(a, n) << endl;
    }
    return 0;
}