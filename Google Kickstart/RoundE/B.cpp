#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll n, ll a, ll b, ll c)
{
}

int main()
{
    int t, x = 1;
    cin >> t;
    while (t--)
    {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;
        cout << "Case #" << x << ":"
             << " " << solve(n, a, b, c) << endl;
        x++;
    }
}