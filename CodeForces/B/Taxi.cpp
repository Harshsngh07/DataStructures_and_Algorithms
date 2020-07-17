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
    int one(0), two(0), three(0), four(0), ans(0);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            one++;
        else if (a[i] == 2)
            two++;
        else if (a[i] == 3)
            three++;
        else
            four++;
    }
    ans = four;

    while (one != 0 && three != 0)
    {
        one--;
        three--;
        ans++;
    }

    if (one == 0 && three != 0)
    {
        ans += three;
        three = 0;
    }
    //if for group of 2 childrens
    ans += two / 2;

    if (two % 2 != 0)
    {
        if (one <= 2)
        {
            ans++;
            one = 0;
            two = 0;
        }
        else
        {
            ans++;
            one -= 2;
            two = 0;
        }
    }

    if (one != 0)
    {
        ans += one / 4;
        if (one % 4 != 0)
            ans++;
    }
    cout << ans << endl;
}