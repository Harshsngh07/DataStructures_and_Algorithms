#include <bits/stdc++.h>
using namespace std;

int bs(int a[], int x, int n)
{
    int start = 0, end(n - 1), res(-1);
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (a[mid] == x)
            return a[mid];
        if (a[mid] > x)
        {
            res = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return a[res];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << bs(a, x, n) << endl;
    }
    return 0;
}