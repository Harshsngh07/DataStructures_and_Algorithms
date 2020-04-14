#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, m;
        cin >> h >> m;
        int total = 1440;
        h = h * 60;
        m = m + h;
        cout << total - m << endl;
    }
}