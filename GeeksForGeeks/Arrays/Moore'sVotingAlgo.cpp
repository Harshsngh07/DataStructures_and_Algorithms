#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll candidate(ll n, ll a[])
{
    int maj_idx = 0, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[maj_idx] == a[i])
            count++;
        else
            count--;

        if (count == 0)
        {
            maj_idx = i;
            count = 1;
        }
    }
    return a[maj_idx];
}

ll isMajority(ll n, ll a[])
{
    int count(0);
    ll cand = candidate(n, a);
    for (int i = 0; i < n; i++)
        if (a[i] == cand)
            count++;

    if (count > n / 2)
        return cand;
    else
        return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        cout << isMajority(n, a) << endl;
    }
    return 0;
}