//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll move(ll n)
{
    if (n == 4)
        return 3;
    if (n % 2 == 0)
    {
        ll temp = n / 2;
        if (temp % 2 == 0)
            return 1;
        else
            return temp;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = 0;
        ll m = 0;
        while (n)
        {
            if (m % 2 == 0)
            {
                ans += move(n);
                n = n - move(n);
            }
            else
                n = n - move(n);
            m++;
        }
        cout << ans << endl;
    }
}