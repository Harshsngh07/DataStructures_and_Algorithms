#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fI(ll a[], ll n, ll x, ll p)
{
    ll min = 100000000, minP = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            if (abs(p - i) < min)
            {
                min = abs(p - i);
                minP = i;
            }
        }
    }

    return minP;
}

void solve()
{

    ll n, x, p, k;
    cin >> n >> x >> p >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    ll idx = fI(a, n, x, p);
    ll count(0);
    if (a[idx] != x)
    {
        a[k - 1] = x;
        sort(a, a + n);
        count++;
    }

    if (a[p - 1] == x)
    {
        cout << 0 + count;
        return;
    }

    if (p < k && a[p - 1] < x)
    {
        cout << -1;
        return;
    }

    if (p > k && a[p - 1] > x)
    {
        cout << -1;
        return;
    }

    idx = fI(a, n, x, p) + 1;
    cout << abs(p - idx) + count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}