#include <bits/stdc++.h>
using namespace std;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int dp[1000000];
int a[1000000];

int solve(int i, int n)
{
    if (i == n-1)
        return 0;
    if (dp[i] != -1)
        return dp[i];

    int ans = abs(a[i] - a[i + 1]) + solve(i + 1, n);
    if (i + 2 < n)
        ans = min(ans, abs(a[i] - a[i + 2]) + solve(i + 2, n));
    return dp[i] = ans;
}

int main()
{
    FIO;
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << solve(0, n) << endl;
    return 0;
}

//recursion + memoization gives tle
#include <bits/stdc++.h>
using namespace std;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int minCost(int ind, int dp[], int a[], int n)
{
    //base cases
    if (ind == (n - 1))
        return 0;
    if (ind >= n)
        return INT_MAX;

    //if found then return
    if (dp[ind] != 0)
        return dp[ind];

    int left = abs(a[ind] - a[ind + 1]) + minCost(ind + 1, dp, a, n);
    int right = INT_MAX;
    if (ind + 2 < n)
        right = abs(a[ind] - a[ind + 2]) + minCost(ind + 2, dp, a, n);

    return dp[n] = min(left, right);
}

int main()
{

    FIO;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));

    cout << minCost(0, dp, a, n) << endl;
    return 0;
}
