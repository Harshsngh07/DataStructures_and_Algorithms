//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int n, int k)
{
    int trips(1), s(0);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > k)
        {
            trips = -1;
            break;
        }
        else if (s + a[i] <= k)
            s += a[i];
        else
        {
            trips++;
            s = a[i];
        }
    }
    return trips;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << solve(a, n, k) << endl;
    }
}