//Longest Arithmetic
#include <bits/stdc++.h>
using namespace std;

long long solve(long long a[], long long n)
{
    long long diff(0), prev(0), count(0), ans(0);
    for (int i = 0; i < n - 1; i++)
    {
        prev = diff;
        diff = a[i] - a[i + 1];

        if (prev == diff)
            count++;
        else
        {
            ans = max(ans, count);
            count = 1;
        }
    }

    if (ans < count)
        ans = max(ans, count);

    ans += 1;
    return ans;
}

int main()
{
    int t, x = 1;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << "Case #" << x << ":"
             << " " << solve(a, n) << endl;
        x++;
    }
}