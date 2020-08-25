#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_CHAR = 256;

ll countSub(string str)
{
    vector<ll> last(MAX_CHAR, -1);
    ll n = str.length();
    ll dp[n + 1];
    dp[0] = 1;

    for (ll i = 1; i <= n; i++)
    {
        dp[i] = 2 * dp[i - 1];
        if (last[str[i - 1]] != -1)
            dp[i] = dp[i] - dp[last[str[i - 1]]];
        last[str[i - 1]] = (i - 1);
    }

    return dp[n];
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << countSub(s) % 1000000007 << endl;
    }
    return 0;
}