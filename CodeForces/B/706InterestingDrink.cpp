//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    sort(a, a + n);
    for (int i = 0; i < q; i++)
    {
        long long int x;
        cin >> x;
        int ans = upper_bound(a, a + n, x) - a;
        cout << ans << endl;
    }
}