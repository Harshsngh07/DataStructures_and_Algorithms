#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n;
        ll ans = n;
        for (int i = 0; i < n; i++)
            cin >> x >> y;
        if (n <= 5)
            cout << n << endl;
        else
        {
            while (n / 2 >= 3)
            {
                n = n / 2;
                ans += n;
            }
            cout << ans << endl;
        }
    }
}