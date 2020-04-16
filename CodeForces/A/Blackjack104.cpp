#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans;
    int queen = 10;
    ans = n - queen;
    int ways = 0;

    if (ans > 0 && ans < 10)
    {
        if (ans % 2 == 0)
        {
            ways++;
            ways *= 4;
        }
        else
        {
            ways++;
            ways *= 4;
        }
    }

    if (ans == 10)
        ways = 15;
    if (ans == 11)
        ways = 4;

    cout << ways;
}