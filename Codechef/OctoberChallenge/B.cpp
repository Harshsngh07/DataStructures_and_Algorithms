#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        int prev = x;
        int z = n / k;
        string ans = "";
        while (x != y)
        {
            x = (x + k) % n;
            if (x == prev)
            {
                ans = "NO";
                break;
            }
        }

        if (ans == "NO")
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}