#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int sum(0);
        long long int a[n];
        for (int i = 1; i <= n - 1; i++)
            cin >> a[i];

        for (int i = 1; i <= n; i++)
            sum += i;

        //int ans(0);
        for (int i = 1; i <= n - 1; i++)
        {
            sum -= a[i];
        }
        cout << sum << endl;
    }
    return 0;
}