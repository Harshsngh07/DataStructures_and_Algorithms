//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long int ans(n);
        if (n <= k)
            ans = 1;
        else
        {
            long long int i;
            for (i = 1; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    if (i <= k)
                        ans = min(ans, n / i);
                    if (n / i <= k)
                        ans = min(ans, i);
                }
            }
        }
        cout << ans << endl;
    }
}