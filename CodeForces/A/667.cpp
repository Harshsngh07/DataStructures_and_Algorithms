#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int y = abs(a - b);
        if (y % 10 == 0)
            cout << y / 10 << endl;
        else
            cout << y / 10 + 1 << endl;
    }
}