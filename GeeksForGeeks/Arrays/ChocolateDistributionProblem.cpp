#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int m;
        cin >> m;

        sort(a, a + n);
        int minD = INT_MAX;

        for (int i = 0; i + m - 1 < n; i++)
        {
            if ((a[i + m - 1] - a[i]) < minD)
                minD = a[i + m - 1] - a[i];
            else
                continue;
        }
        cout << minD << endl;
    }
    return 0;
}